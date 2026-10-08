#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for (auto &v : a) cin >> v;

        long long lo = 1, hi = 2000000001LL;
        while (lo < hi) {
            long long mid = (lo + hi + 1) / 2;
            long long water = 0;
            for (int i = 0; i < n; i++) {
                if (mid > a[i]) water += mid - a[i];
                if (water > x) break;
            }
            if (water <= x)
                lo = mid;
            else
                hi = mid - 1;
        }
        cout << lo << "\n";
    }
    return 0;
}
