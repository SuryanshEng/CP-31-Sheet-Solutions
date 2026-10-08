#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &v : a) cin >> v;
        sort(a.begin(), a.end());

        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) prefix[i + 1] = prefix[i] + a[i];

        long long best = LLONG_MIN;
        for (int i = 0; i <= k; i++) {
            int maxRemovals = k - i;
            long long remaining = prefix[n - maxRemovals] - prefix[2 * i];
            best = max(best, remaining);
        }
        cout << best << "\n";
    }
    return 0;
}
