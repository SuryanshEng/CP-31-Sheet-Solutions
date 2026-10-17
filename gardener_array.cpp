#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        vector<int> cnt(200001, 0);
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<vector<int>> bits(n);
            for (auto &v : bits) {
                int k;
                cin >> k;
                v.resize(k);
                for (int &p : v) cin >> p, cnt[p]++;
            }
            bool ok = false;
            for (auto &v : bits) {
                bool all = true;
                for (int p : v)
                    if (cnt[p] < 2) {
                        all = false;
                        break;
                    }
                if (all) {
                    ok = true;
                    break;
                }
            }
            for (auto &v : bits)
                for (int p : v) cnt[p] = 0;
            cout << (ok ? "Yes" : "No") << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
