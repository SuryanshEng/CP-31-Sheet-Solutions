#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+2);
        for(int i=1;i<=n;i++)cin>>p[i];
        int f=0;
        for(int j=2;j<n&&!f;j++)
            if(p[j-1]<p[j]&&p[j]>p[j+1])f=j;
        if(f)cout<<"YES\n"<<f-1<<" "<<f<<" "<<f+1<<"\n";
        else cout<<"NO\n";
    }
}
