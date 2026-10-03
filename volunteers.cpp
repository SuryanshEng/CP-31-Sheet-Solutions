#include <bits/stdc++.h>
using namespace std;
int p[200005];
int F(int x){return p[x]==x?x:p[x]=F(p[x]);}
int main(){
    int T; scanf("%d",&T);
    while(T--){
        int n,k; scanf("%d %d",&n,&k);
        vector<int> f(n+1),sz(n+1,0);
        vector<vector<int>> r(n+1);
        iota(p,p+n+1,0);
        for(int i=1;i<=n;i++){scanf("%d",&f[i]);r[f[i]].push_back(i);p[F(i)]=F(f[i]);}
        for(int i=1;i<=n;i++) sz[F(i)]++;
        vector<char> vis(n+1,0);
        vector<int> q={1}; vis[1]=1;
        for(size_t i=0;i<q.size();i++) for(int u:r[q[i]]) if(!vis[u]) vis[u]=1,q.push_back(u);
        int base=q.size();
        vector<int> g;
        for(int i=1;i<=n;i++) if(F(i)==i){
            int v=sz[i]-(i==F(1)?base:0);
            if(v>0) g.push_back(v);
        }
        sort(g.rbegin(),g.rend());
        for(int i=0;i<k&&i<(int)g.size();i++) base+=g[i];
        printf("%d\n",base);
    }
}
