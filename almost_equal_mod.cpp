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
            vector<ll> a(n);
            for (auto &x : a) cin >> x;
            for (ll k = 2;; k <<= 1) {
                set<ll> s;
                for (ll x : a) s.insert(x % k);
                if (s.size() == 2) {
                    cout << k << "\n";
                    break;
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
