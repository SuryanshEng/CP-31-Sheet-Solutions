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
        sort(idx.begin(), idx.end(), [&](int i, int j) { return a[i] < a[j]; });

        vector<long long> prefix(n);
        for (int i = 0; i < n; i++)
            prefix[i] = (i ? prefix[i - 1] : 0) + a[idx[i]];

        vector<int> reach(n);
        reach[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (prefix[i] >= a[idx[i + 1]])
                reach[i] = reach[i + 1];
            else
                reach[i] = i;
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++) ans[idx[i]] = reach[i];

        for (int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}
