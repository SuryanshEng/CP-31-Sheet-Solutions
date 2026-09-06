#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        bool ok = false;
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            ok |= (x == k);
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}