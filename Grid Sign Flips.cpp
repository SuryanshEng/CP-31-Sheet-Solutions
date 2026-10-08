#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int sum = 0, negatives = 0, minAbs = INT_MAX;
        bool hasZero = false;
        for (int i = 0; i < n * m; i++) {
            int x;
            cin >> x;
            if (x < 0) negatives++;
            if (x == 0) hasZero = true;
            sum += abs(x);
            minAbs = min(minAbs, abs(x));
        }
        if (negatives % 2 == 0 || hasZero)
            cout << sum << "\n";
        else
            cout << sum - 2 * minAbs << "\n";
    }
    return 0;
}
