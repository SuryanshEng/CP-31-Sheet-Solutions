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
        vector<long long> a(n*k);
        for(auto&x:a)cin>>x;
        int step=n/2+1;
        long long r=0;
        int p=n*k-step;
        for(int i=0;i<k;i++,p-=step)r+=a[p];
        cout<<r<<"\n";
    }
}
