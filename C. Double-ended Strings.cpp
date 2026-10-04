#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int best = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i - 1] == b[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    best = max(best, dp[i][j]);
                }
            }
        }

        cout << n + m - 2 * best << "\n";
    }
    return 0;
}
