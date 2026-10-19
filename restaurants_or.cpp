#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            ll mx = 0, mn = LLONG_MAX;
            for (int i = 0; i < n; i++) {
                ll x;
                cin >> x;
                mx = max(mx, x);
                mn = min(mn, x);
            }
            if (mn == mx) {
                cout << mx << "\n";
                continue;
            }
            ll ans = mx;
            for (int j = 62; j >= 0; j--) {
                if ((mx >> j & 1) && mn < ((mx >> j) << j)) {
                    ans = mx | ((1LL << j) - 1);
                    break;
                }
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
