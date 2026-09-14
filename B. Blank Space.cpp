#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, ans = 0, cur = 0;
        cin >> n;

        while (n--) {
            int x; cin >> x;
            cur = x ? 0 : cur + 1;
            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }
}