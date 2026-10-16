#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n, q;
            cin >> n >> q;
            vector<ll> pmax(n), psum(n + 1, 0);
            ll mx = 0;
            for (int i = 0; i < n; i++) {
                ll x;
                cin >> x;
                mx = max(mx, x);
                pmax[i] = mx;
                psum[i + 1] = psum[i] + x;
            }
            while (q--) {
                ll k;
                cin >> k;
                int p = upper_bound(pmax.begin(), pmax.end(), k) - pmax.begin();
                cout << psum[p] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
