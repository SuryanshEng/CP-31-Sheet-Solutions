#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            prefix[i] = prefix[i - 1] + x;
        }

        long long best = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;
            long long mx = LLONG_MIN, mn = LLONG_MAX;
            for (int start = 0; start < n; start += k) {
                long long sum = prefix[start + k] - prefix[start];
                mx = max(mx, sum);
                mn = min(mn, sum);
            }
            best = max(best, mx - mn);
        }
        cout << best << "\n";
    }
    return 0;
}
