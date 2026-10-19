#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string a, b;
            cin >> n >> a >> b;
            vector<char> balanced(n + 1, 0);
            int diff = 0;
            for (int i = 1; i <= n; i++) {
                diff += a[i - 1] == '1' ? 1 : -1;
                balanced[i] = diff == 0;
            }
            bool flip = false, ok = true;
            for (int i = n; i >= 1 && ok; i--) {
                bool cur = (a[i - 1] != b[i - 1]) ^ flip;
                if (cur) {
                    if (!balanced[i]) ok = false;
                    else flip = !flip;
                }
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
