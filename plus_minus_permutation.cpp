#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            ll n, x, y;
            cin >> n >> x >> y;
            ll l = x / __gcd(x, y) * y;
            ll a = n / x - n / l, b = n / y - n / l;
            cout << a * (2 * n - a + 1) / 2 - b * (b + 1) / 2 << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
