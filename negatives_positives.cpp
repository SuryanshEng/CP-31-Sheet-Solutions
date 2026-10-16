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
            ll sum = 0, lo = LLONG_MAX;
            int neg = 0;
            while (n--) {
                ll x;
                cin >> x;
                neg += x < 0;
                sum += llabs(x);
                lo = min(lo, llabs(x));
            }
            cout << sum - (neg & 1) * 2 * lo << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
