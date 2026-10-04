#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long w, h;
        cin >> w >> h;

        long long best = 0;
        // sides in input order: bottom, top (horizontal), left, right (vertical)
        for (int side = 0; side < 4; side++) {
            int k;
            cin >> k;
            vector<long long> a(k);
            for (auto &x : a) cin >> x;
            long long base = a[k - 1] - a[0];
            long long height = (side < 2) ? h : w;
            best = max(best, base * height);
        }
        cout << best << "\n";
    }
    return 0;
}
