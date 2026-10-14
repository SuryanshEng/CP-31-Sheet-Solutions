#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> s(n), p(n);
            for (auto &x : s) cin >> x;
            bool ok = true;
            for (int l = 0, r; l < n && ok; l = r) {
                r = l;
                while (r < n && s[r] == s[l]) r++;
                if (r - l < 2) {
                    ok = false;
                    break;
                }
                p[l] = r;
                for (int i = l + 1; i < r; i++) p[i] = i;
            }
            if (!ok) {
                cout << -1 << "\n";
                continue;
            }
            for (int i = 0; i < n; i++) cout << p[i] << " ";
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
