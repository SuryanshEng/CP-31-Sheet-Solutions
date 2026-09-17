#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int T; cin>>T;
    while(T--){
        int n,ans=0; cin>>n;
        vector<int>a(n);
        for(auto&x:a) cin>>x;

        for(int i=1;i<n;i++)
            if((a[i]&1)==(a[i-1]&1))
                ans++,a[i]=a[i-1];

        cout<<ans<<"\n";
    }
}