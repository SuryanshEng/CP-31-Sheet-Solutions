#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            a%=k;
            if(a==0)a=k;
            v[i]={-a,i+1};
        }
        sort(v.begin(),v.end());
        for(auto&p:v)cout<<p.second<<" ";
        cout<<"\n";
    }
}
