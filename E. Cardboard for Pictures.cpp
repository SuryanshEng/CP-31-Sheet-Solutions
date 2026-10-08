#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> s(n);
        for (auto &v : s) cin >> v;

        long long lo = 1, hi = 1000000000LL;
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            long long total = 0;
            bool tooBig = false;
            for (int i = 0; i < n; i++) {
                long long side = s[i] + 2 * mid;
                total += side * side;
                if (total > c) {
                    tooBig = true;
                    break;
                }
            }
            if (tooBig || total > c)
                hi = mid;
            else if (total == c) {
                lo = mid;
                break;
            } else
                lo = mid + 1;
        }
        cout << lo << "\n";
    }
    return 0;
}
