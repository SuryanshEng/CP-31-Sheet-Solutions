#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353LL;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            string s;
            cin >> s;
            int n = s.size();
            ll ways = 1, ops = 0;
            for (int i = 0; i < n;) {
                int j = i;
                while (j < n && s[j] == s[i]) j++;
                ways = ways * (j - i) % MOD;
                ops += j - i - 1;
                i = j;
            }
            for (ll k = 1; k <= ops; k++) ways = ways * k % MOD;
            cout << ops << " " << ways << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
