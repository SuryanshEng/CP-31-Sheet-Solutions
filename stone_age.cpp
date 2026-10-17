#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1);
        vector<int> ver(n + 1, 0);
        ll sum = 0, gval = 0;
        int gver = 0;
        for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
        for (int id = 1; id <= q; id++) {
            int t;
            cin >> t;
            if (t == 1) {
                int i;
                ll x;
                cin >> i >> x;
                ll cur = ver[i] < gver ? gval : a[i];
                sum += x - cur;
                a[i] = x;
                ver[i] = id;
            } else {
                ll x;
                cin >> x;
                gval = x;
                gver = id;
                sum = x * n;
            }
            cout << sum << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
