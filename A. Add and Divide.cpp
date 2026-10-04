#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int best = INT_MAX;
        for (int k = 0; k <= 40; k++) {
            long long nb = b + k;
            if (nb == 1) continue;
            long long cur = a;
            int steps = k;
            while (cur > 0) {
                cur /= nb;
                steps++;
            }
            best = min(best, steps);
        }
        cout << best << "\n";
    }
    return 0;
}
