#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, x, p = 0, ans = 0;
        cin >> n >> x;
        for (int i = 0, a; i < n; i++)
            cin >> a, ans = max(ans, a - p), p = a;
        cout << max(ans, 2 * (x - p)) << '\n';
    }
}