#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            ll x;
            cin >> n >> x;
            vector<ll> a(n);
            for (auto &v : a) cin >> v;
            sort(a.begin(), a.end());
            ll pre = 0, ans = 0;
            for (int k = 1; k <= n; k++) {
                pre += a[k - 1];
                if (pre > x) break;
                ans += (x - pre) / k + 1;
            }
            cout << ans << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
