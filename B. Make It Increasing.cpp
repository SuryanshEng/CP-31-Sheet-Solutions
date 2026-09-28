#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long cur = a[n - 1];
    int ans = 0;

    for (int i = n - 2; i >= 0; --i) {
        if (a[i] < cur) {
            cur = a[i];
            continue;
        }

        long long x = a[i];
        int cnt = 0;

        while (x >= cur && x > 0) {
            x /= 2;
            ++cnt;
        }

        if (x >= cur) {
            cout << -1 << '\n';
            return;
        }

        ans += cnt;
        cur = x;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}