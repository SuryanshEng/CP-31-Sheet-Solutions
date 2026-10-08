#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        long long best = 0, prefixA = 0, maxB = 0;
        for (int i = 0; i < n && i < k; i++) {
            prefixA += a[i];
            maxB = max(maxB, b[i]);
            best = max(best, prefixA + (k - (i + 1)) * maxB);
        }
        cout << best << "\n";
    }
    return 0;
}
