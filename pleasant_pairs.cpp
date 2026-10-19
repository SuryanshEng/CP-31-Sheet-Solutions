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
            vector<int> a(n + 1), pos(2 * n + 1, 0);
            for (int i = 1; i <= n; i++) cin >> a[i], pos[a[i]] = i;
            ll ans = 0;
            for (int i = 1; i <= n; i++)
                for (ll v = 1; (ll)a[i] * v <= 2LL * n; v++) {
                    int j = pos[v];
                    if (j > i && (ll)a[i] * v == i + j) ans++;
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
