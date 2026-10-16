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
            vector<int> c(n);
            for (auto &x : c) cin >> x;
            sort(c.begin(), c.end());
            bool ok = c[0] == 1;
            ll pre = c[0];
            for (int i = 1; i < n && ok; i++) {
                if (c[i] > pre) ok = false;
                pre += c[i];
            }
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
