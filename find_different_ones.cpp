#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n + 1), diff(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                cin >> a[i];
                if (i > 1) diff[i] = a[i] != a[i - 1] ? i - 1 : diff[i - 1];
            }
            int q;
            cin >> q;
            while (q--) {
                int l, r;
                cin >> l >> r;
                if (diff[r] >= l) cout << diff[r] << " " << r << "\n";
                else cout << -1 << " " << -1 << "\n";
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
