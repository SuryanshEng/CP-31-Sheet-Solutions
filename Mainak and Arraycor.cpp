#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto&x:a) cin >> x;
        if(n==1){ cout << 0 << "\n"; continue; }

        int ans = a[n-1]-a[0];

        for(int i=0;i<n;i++)
            ans = max(ans, a[i]-a[(i+1)%n]);

        int mn = a[0];
        for(int i=0;i<n-1;i++) mn = min(mn, a[i]);
        ans = max(ans, a[n-1]-mn);

        int mx = a[1];
        for(int i=1;i<n;i++) mx = max(mx, a[i]);
        ans = max(ans, mx-a[0]);

        cout << ans << "\n";
    }
}