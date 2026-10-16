#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<long long> c;
            for (int i = 0; i < n; i++) {
                long long x;
                cin >> x;
                if (c.empty() || c.back() != x) c.push_back(x);
            }
            int m = c.size();
            if (m == 1) {
                cout << 1 << "\n";
                continue;
            }
            int ans = 2;
            for (int i = 1; i + 1 < m; i++)
                if ((c[i] - c[i - 1] > 0) != (c[i + 1] - c[i] > 0)) ans++;
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
