#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<long long> a(n + 1);
            for (int i = 1; i <= n; i++) cin >> a[i];
            if (is_sorted(a.begin() + 1, a.end())) {
                cout << 0 << "\n";
                continue;
            }
            if (a[n - 1] > a[n] || a[n] < 0) {
                cout << -1 << "\n";
                continue;
            }
            cout << n - 2 << "\n";
            for (int i = 1; i <= n - 2; i++) cout << i << " " << n - 1 << " " << n << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
