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
            vector<ll> a(n);
            ll total = 0;
            for (auto &x : a) cin >> x, total += x;
            ll pre = 0, ans = 1;
            for (int i = 0; i + 1 < n; i++) {
                pre += a[i];
                ans = max(ans, __gcd(total, pre));
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
