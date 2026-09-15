#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        for(auto &x:a) cin >> x;

        bool ok=0;
        for(int i=0;i<n&&!ok;i++)
            for(int j=i+1;j<n;j++)
                if(gcd(a[i],a[j])<=2)
                    ok=1;

        cout << (ok?"Yes\n":"No\n");
    }
}