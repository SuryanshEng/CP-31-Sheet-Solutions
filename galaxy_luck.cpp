#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n, m;
            cin >> n >> m;
            vector<vector<int>> col(m, vector<int>(n));
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++) cin >> col[j][i];
            ll ans = 0;
            for (int j = 0; j < m; j++) {
                sort(col[j].begin(), col[j].end());
                for (int i = 0; i < n; i++) ans += (ll)col[j][i] * (2LL * i - n + 1);
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
