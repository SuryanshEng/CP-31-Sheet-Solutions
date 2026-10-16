#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n, k;
            cin >> n >> k;
            vector<int> last(k + 1, 0), m1(k + 1, 0), m2(k + 1, 0);
            vector<bool> seen(k + 1, false);
            auto push = [&](int c, int g) {
                if (g > m1[c]) m2[c] = m1[c], m1[c] = g;
                else if (g > m2[c]) m2[c] = g;
            };
            for (int i = 1; i <= n; i++) {
                int c;
                cin >> c;
                seen[c] = true;
                push(c, i - last[c] - 1);
                last[c] = i;
            }
            int ans = INT_MAX;
            for (int c = 1; c <= k; c++) {
                if (!seen[c]) continue;
                push(c, n - last[c]);
                ans = min(ans, max(m1[c] / 2, m2[c]));
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
