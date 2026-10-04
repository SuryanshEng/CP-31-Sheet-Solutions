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
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int i, int j) { return a[i] > a[j]; });

        vector<long long> x(n + 1, 0); // x[0] = 0 is the headquarters
        long long total = 0;
        for (int r = 0; r < n; r++) {
            long long d = r / 2 + 1;          // distance 1,1,2,2,3,3,...
            long long pos = (r % 2 == 0) ? d : -d;
            x[idx[r] + 1] = pos;
            total += 2 * d * a[idx[r]];
        }

        cout << total << "\n";
        for (int i = 0; i <= n; i++) cout << x[i] << " ";
        cout << "\n";
    }
    return 0;
}
