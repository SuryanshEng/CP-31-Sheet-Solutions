#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;

        for (int k = 0; k <= 6; k++) {
            if (x.find(s) != string::npos) {
                cout << k << '\n';
                goto nxt;
            }
            x += x;
        }
        cout << -1 << '\n';
        nxt:;
    }
}