#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int qrTNum;
        cin >> qrTNum;
        while (qrTNum--) {
            ll x, y;
            cin >> x >> y;
            ll s = x + y, a = 0;
            bool loose = false;
            for (int i = 30; i >= 0; i--) {
                int xb = x >> i & 1, sb = s >> i & 1;
                if (loose) a |= (ll)sb << i;
                else if (xb) {
                    if (sb) a |= 1LL << i;
                    else loose = true;
                }
            }
            cout << s << " " << x - a << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
