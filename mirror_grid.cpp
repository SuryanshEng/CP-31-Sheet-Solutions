#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);

        for (auto &row : a) cin >> row;

        int ans = 0;

        for (int i = 0; i < n / 2; ++i) {
            for (int j = 0; j < (n + 1) / 2; ++j) {
                char x[4] = {
                    a[i][j],
                    a[j][n - 1 - i],
                    a[n - 1 - i][n - 1 - j],
                    a[n - 1 - j][i]
                };

                int ones = 0;
                for (char c : x) ones += c - '0';

                ans += min(ones, 4 - ones);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
