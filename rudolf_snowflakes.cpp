#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        const ll LIM = 1000000;
        vector<char> good(LIM + 1, 0);
        for (ll k = 2; 1 + k + k * k <= LIM; k++) {
            ll sum = 1 + k + k * k, pw = k * k;
            while (sum <= LIM) {
                good[sum] = 1;
                pw *= k;
                sum += pw;
            }
        }
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            cout << (good[n] ? "YES" : "NO") << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
