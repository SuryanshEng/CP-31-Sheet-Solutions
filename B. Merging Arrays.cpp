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
        vector<int> ma(2*n+1,0),mb(2*n+1,0);
        for(auto*m:{&ma,&mb}){
            int prev=0,len=0;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                len=(x==prev)?len+1:1;
                prev=x;
                (*m)[x]=max((*m)[x],len);
            }
        }
        int r=0;
        for(int v=1;v<=2*n;v++)r=max(r,ma[v]+mb[v]);
        cout<<r<<"\n";
    }
}
