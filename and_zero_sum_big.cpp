#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007LL;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            ll n, k;
            cin >> n >> k;
            ll ans = 1;
            while (k--) ans = ans * n % MOD;
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
