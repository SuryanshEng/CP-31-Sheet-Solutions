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
            vector<ll> p(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                ll a;
                cin >> a;
                p[i] = p[i - 1] + (i % 2 ? a : -a);
            }
            sort(p.begin(), p.end());
            bool ok = adjacent_find(p.begin(), p.end()) != p.end();
            cout << (ok ? "YES" : "NO") << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
