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

        vector<int> a(n), b, c;
        for (auto &x : a) cin >> x;

        int mx = *max_element(a.begin(), a.end());

        for (int x : a)
            (x == mx ? c : b).push_back(x);

        if (b.empty()) {
            cout << -1 << '\n';
            continue;
        }

        cout << b.size() << ' ' << c.size() << '\n';

        for (int x : b) cout << x << ' ';
        cout << '\n';

        for (int x : c) cout << x << ' ';
        cout << '\n';
    }
}