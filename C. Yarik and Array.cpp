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
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        long long cur = a[0], best = a[0];
        for (int i = 1; i < n; i++) {
            bool alternates = (abs(a[i]) % 2) != (abs(a[i - 1]) % 2);
            if (alternates && cur > 0)
                cur += a[i];
            else
                cur = a[i];
            best = max(best, cur);
        }
        cout << best << "\n";
    }
    return 0;
}
