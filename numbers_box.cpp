#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n, m;
            cin >> n >> m;
            int sum = 0, neg = 0, lo = INT_MAX;
            for (int i = 0; i < n * m; i++) {
                int x;
                cin >> x;
                neg += x < 0;
                sum += abs(x);
                lo = min(lo, abs(x));
            }
            cout << sum - (neg & 1) * 2 * lo << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
