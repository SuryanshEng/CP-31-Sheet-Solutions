#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, x = 0;
        cin >> n;

        for (int i = 0, a; i < n; i++)
            cin >> a, x += a == -1;

        int ans = max(0, x - n / 2);
        if ((x - ans) & 1) ans++;

        cout << ans << '\n';
    }
}