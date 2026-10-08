#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        a--;
        b--;
        vector<long long> x(n), y(n);
        for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

        auto dist = [&](int i, int j) {
            return llabs(x[i] - x[j]) + llabs(y[i] - y[j]);
        };

        long long ans = dist(a, b);

        if (k > 0) {
            long long da = LLONG_MAX, db = LLONG_MAX;
            for (int i = 0; i < k; i++) {
                da = min(da, dist(a, i));
                db = min(db, dist(b, i));
            }
            if (a < k) da = 0;
            if (b < k) db = 0;
            ans = min(ans, da + db);
        }

        cout << ans << "\n";
    }
    return 0;
}
