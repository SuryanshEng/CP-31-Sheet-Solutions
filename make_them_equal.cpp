#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            char c;
            string s;
            cin >> n >> c >> s;
            if (count(s.begin(), s.end(), c) == n) {
                cout << 0 << "\n";
                continue;
            }
            int pick = -1;
            for (int i = n; i * 2 > n; i--)
                if (s[i - 1] == c) {
                    pick = i;
                    break;
                }
            if (pick != -1) cout << 1 << "\n" << pick << "\n";
            else cout << 2 << "\n" << n - 1 << " " << n << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
