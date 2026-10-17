#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        long long total = 0;
        for (auto &x : a) {
            cin >> x;
            total += x;
        }
        if (total < s) {
            cout << -1 << "\n";
            continue;
        }
        int best = 0, l = 0, cur = 0;
        for (int r = 0; r < n; r++) {
            cur += a[r];
            while (cur > s) {
                cur -= a[l++];
            }
            if (cur == s) best = max(best, r - l + 1);
        }
        cout << n - best << "\n";
    }
    return 0;
}
