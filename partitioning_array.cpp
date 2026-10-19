#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (auto &x : a) cin >> x;
            int ans = 0;
            for (int k = 1; k <= n; k++) {
                if (n % k) continue;
                int g = 0;
                for (int i = 0; i + k < n && g != 1; i++) g = __gcd(g, abs(a[i] - a[i + k]));
                if (g != 1) ans++;
            }
            cout << ans << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
