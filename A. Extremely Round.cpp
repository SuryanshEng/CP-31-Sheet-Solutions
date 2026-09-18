#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int p=1,ans=0;
        while(p<=n) ans+=min(9,n/p),p*=10;
        cout<<ans<<'\n';
    }
}