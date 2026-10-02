#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<pair<long long,long long>> v(n);
        for(auto&x:v)cin>>x.second;
        for(auto&x:v)cin>>x.first;
        sort(v.begin(),v.end());
        long long cost=p,rem=n-1;
        for(auto&[b,a]:v){
            if(b>=p||rem==0)break;
            long long k=min(a,rem);
            cost+=k*b;
            rem-=k;
        }
        cout<<cost+rem*p<<"\n";
    }
}
