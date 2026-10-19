#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            ll k;
            string mooRBS;
            cin >> n >> k >> mooRBS;
            ll m = n / 2;
            vector<ll> cost(m + 2, 0), closed(m + 2, 0);
            int d = 0;
            ll ans = 0;
            for (char c : mooRBS) {
                if (c == '(') {
                    d++;
                    cost[d] = cost[d - 1] + closed[d - 1];
                    closed[d] = 0;
                    if (cost[d] <= k) ans = max(ans, min((ll)d + k, m));
                    int e = lower_bound(cost.begin() + 1, cost.begin() + d + 1, cost[d] - k) - cost.begin();
                    ans = max(ans, (ll)d - e + 1);
                } else {
                    closed[d - 1] += 1 + closed[d];
                    d--;
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
