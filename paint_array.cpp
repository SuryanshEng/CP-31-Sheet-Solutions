#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    ll attempt(const vector<ll> &a, int start) {
        ll g = 0;
        for (size_t i = start; i < a.size(); i += 2) g = __gcd(g, a[i]);
        for (size_t i = 1 - start; i < a.size(); i += 2)
            if (a[i] % g == 0) return 0;
        return g;
    }

    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<ll> a(n);
            for (auto &x : a) cin >> x;
            ll ans = attempt(a, 0);
            if (!ans) ans = attempt(a, 1);
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
