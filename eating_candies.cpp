#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<ll> w(n);
            for (auto &x : w) cin >> x;
            int l = 0, r = n - 1, ans = 0;
            ll sa = 0, sb = 0;
            while (l <= r) {
                if (sa <= sb) sa += w[l++];
                else sb += w[r--];
                if (sa == sb) ans = l + n - 1 - r;
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
