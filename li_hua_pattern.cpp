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
            cin >> n >> k;
            vector<vector<int>> g(n, vector<int>(n));
            for (auto &r : g)
                for (auto &x : r) cin >> x;
            ll d = 0;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    d += g[i][j] != g[n - 1 - i][n - 1 - j];
            d /= 2;
            bool ok = k >= d && (n % 2 == 1 || (k - d) % 2 == 0);
            cout << (ok ? "YES" : "NO") << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
