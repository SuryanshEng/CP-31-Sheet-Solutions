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
            vector<ll> cnt(31, 0);
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                cnt[31 - __builtin_clz(x)]++;
            }
            ll ans = 0;
            for (ll c : cnt) ans += c * (c - 1) / 2;
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
