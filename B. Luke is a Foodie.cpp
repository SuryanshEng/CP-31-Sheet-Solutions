#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    long long L = -2e18, R = 2e18;
    int changes = 0;

    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;

        long long cur_L = a - x;
        long long cur_R = a + x;

        L = max(L, cur_L);
        R = min(R, cur_R);

        if (L > R) {
            changes++;
            L = cur_L;
            R = cur_R;
        }
    }

    cout << changes << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}