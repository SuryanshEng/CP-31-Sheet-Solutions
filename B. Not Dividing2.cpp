#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (auto &x : a) {
        cin >> x;
        if (x == 1) x = 2;
    }

    for (int i = 1; i < n; ++i)
        if (a[i] % a[i - 1] == 0)
            ++a[i];

    for (auto x : a) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}