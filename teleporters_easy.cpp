#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            ll c;
            cin >> n >> c;
            vector<ll> b(n);
            for (int i = 0; i < n; i++) {
                cin >> b[i];
                b[i] += i + 1;
            }
            sort(b.begin(), b.end());
            int ans = 0;
            for (int i = 0; i < n && c >= b[i]; i++) c -= b[i], ans++;
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
