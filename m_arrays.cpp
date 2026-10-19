#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n, m;
            cin >> n >> m;
            vector<int> cnt(m, 0);
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                cnt[x % m]++;
            }
            int ans = cnt[0] > 0;
            if (m % 2 == 0 && cnt[m / 2] > 0) ans++;
            for (int r = 1; r < m - r; r++) {
                int hi = max(cnt[r], cnt[m - r]), lo = min(cnt[r], cnt[m - r]);
                if (hi == 0) continue;
                ans += hi - lo <= 1 ? 1 : hi - lo;
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
