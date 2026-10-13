#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

struct soulsold {
    ll lara, ponting;
    pll memo[32][2][2];
    bool seen[32][2][2];

    pll go(int i, int tight, int c) {
        if (i < 0) return c == 0 ? pll(0, 0) : pll(-1, -1);
        if (seen[i][tight][c]) return memo[i][tight][c];
        seen[i][tight][c] = true;
        pll best(-1, -1);
        int xi = (lara >> i) & 1;
        int si = ((lara + ponting) >> i) & 1;
        for (int a = 0; a < 2; a++) {
            if (tight && a > xi) continue;
            for (int b = 0; b < 2; b++) {
                for (int cin_ = 0; cin_ < 2; cin_++) {
                    if (a + b + cin_ != si + 2 * c) continue;
                    pll nxt = go(i - 1, tight && a == xi, cin_);
                    if (nxt.first < 0) continue;
                    pll cur(nxt.first + ((ll)(a ^ b) << i), nxt.second + ((ll)a << i));
                    if (cur > best) best = cur;
                }
            }
        }
        return memo[i][tight][c] = best;
    }

    void run() {
        int qrTNum;
        cin >> qrTNum;
        while (qrTNum--) {
            cin >> lara >> ponting;
            memset(seen, 0, sizeof(seen));
            pll r = go(31, 1, 0);
            cout << r.first << " " << lara - r.second << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
    return 0;
}
