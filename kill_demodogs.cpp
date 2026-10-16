#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007LL;

struct soulsold {
    ll power(ll b, ll e) {
        ll r = 1;
        b %= MOD;
        while (e) {
            if (e & 1) r = r * b % MOD;
            b = b * b % MOD;
            e >>= 1;
        }
        return r;
    }

    void run() {
        int t;
        cin >> t;
        ll inv6 = power(6, MOD - 2);
        while (t--) {
            ll n;
            cin >> n;
            ll ans = n % MOD * ((n + 1) % MOD) % MOD * ((4 * n - 1) % MOD) % MOD * inv6 % MOD;
            cout << ans * 2022 % MOD << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
