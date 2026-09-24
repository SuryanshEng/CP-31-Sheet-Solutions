#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        int mx = 1, cur = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] <= k)
                ++cur;
            else
                cur = 1;
            mx = max(mx, cur);
        }

        cout << n - mx << '\n';
    }
    return 0;
}