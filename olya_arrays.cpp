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
            ll sum = 0, lo = LLONG_MAX, g = LLONG_MAX;
            while (n--) {
                int m;
                cin >> m;
                ll a = LLONG_MAX, b = LLONG_MAX;
                while (m--) {
                    ll x;
                    cin >> x;
                    if (x < a) b = a, a = x;
                    else if (x < b) b = x;
                }
                sum += b;
                lo = min(lo, b);
                g = min(g, a);
            }
            cout << sum - lo + g << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
