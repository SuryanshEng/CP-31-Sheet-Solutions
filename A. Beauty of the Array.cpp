#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long s=0,mx=0;
        while(n--){
            long long a;
            cin>>a;
            s+=a;
            mx+=(a+x-1)/x;
        }
        cout<<(s+x-1)/x<<" "<<mx<<"\n";
    }
}
