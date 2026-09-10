#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        int ans = 1e9;
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1]) {
                ans = 0;
                break;
            }
            ans = min(ans, (int)((a[i + 1] - a[i]) / 2 + 1));
        }
        cout << ans << '\n';
    }
}