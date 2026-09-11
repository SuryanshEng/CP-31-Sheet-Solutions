#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,x; cin>>n>>k>>x;
        vector<int> ans;
        bool ok=true;
        if(x!=1){
            for(int i=0;i<n;i++) ans.push_back(1);
        } else if(k==1){
            ok=false;
        } else if(n%2==0){
            for(int i=0;i<n/2;i++) ans.push_back(2);
        } else if(k>=3){
            ans.push_back(3);
            for(int i=0;i<(n-3)/2;i++) ans.push_back(2);
        } else ok=false;

        if(!ok) cout<<"NO\n";
        else{
            cout<<"YES\n"<<ans.size()<<"\n";
            for(int v:ans) cout<<v<<" ";
            cout<<"\n";
        }
    }
}