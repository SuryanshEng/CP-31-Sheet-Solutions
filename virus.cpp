#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        int m;
        cin >> n >> m;

        vector<long long> a(m);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        vector<long long> gaps;
        for (int i = 1; i < m; ++i)
            gaps.push_back(a[i] - a[i - 1] - 1);

        gaps.push_back(a[0] + n - a[m - 1] - 1);
        sort(gaps.rbegin(), gaps.rend());

        long long saved = 0, days = 0;

        for (long long gap : gaps) {
            long long remaining = gap - 2 * days;
            if (remaining <= 0) continue;

            if (remaining == 1) {
                ++saved;
                ++days;
            } else {
                saved += remaining - 1;
                days += 2;
            }
        }

        cout << n - saved << '\n';
    }

    return 0;
}
