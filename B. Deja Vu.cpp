#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (auto &v : a) cin >> v;

        int minX = 31;
        while (q--) {
            int x;
            cin >> x;
            if (x >= minX) continue;
            minX = x;
            long long div = 1LL << x;
            long long add = 1LL << (x - 1);
            for (auto &v : a)
                if (v % div == 0) v += add;
        }

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
