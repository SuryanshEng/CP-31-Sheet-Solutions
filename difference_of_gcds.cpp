#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            ll n, l, r;
            cin >> n >> l >> r;
            vector<ll> a(n);
            bool ok = true;
            for (ll i = 1; i <= n; i++) {
                a[i - 1] = (l + i - 1) / i * i;
                if (a[i - 1] > r) {
                    ok = false;
                    break;
                }
            }
            if (!ok) {
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            for (ll x : a) cout << x << " ";
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
