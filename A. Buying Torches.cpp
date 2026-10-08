#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long need = k * (y + 1) - 1;
        long long stickTrades = (need + (x - 1) - 1) / (x - 1);
        cout << stickTrades + k << "\n";
    }
    return 0;
}
