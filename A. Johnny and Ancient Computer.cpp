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
        long long big = max(a, b), small = min(a, b);
        if (big % small != 0) {
            cout << -1 << "\n";
            continue;
        }
        long long ratio = big / small;
        if (ratio & (ratio - 1)) {
            cout << -1 << "\n";
            continue;
        }
        int k = 0;
        while (ratio > 1) {
            ratio >>= 1;
            k++;
        }
        cout << (k + 2) / 3 << "\n";
    }
    return 0;
}
