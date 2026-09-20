#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;

        ll mn = k * (k + 1) / 2;
        ll mx = k * (2 * n - k + 1) / 2;

        cout << (mn <= x && x <= mx ? "YES\n" : "NO\n");
    }
}