#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            ll x, y;
            cin >> n >> x >> y;
            map<pair<ll, ll>, int> seen;
            ll ans = 0;
            for (int i = 0; i < n; i++) {
                ll a;
                cin >> a;
                auto it = seen.find({(x - a % x) % x, a % y});
                if (it != seen.end()) ans += it->second;
                seen[{a % x, a % y}]++;
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
