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
            vector<ll> c(n);
            for (auto &x : c) cin >> x;
            for (auto &x : c) {
                ll b;
                cin >> b;
                x -= b;
            }
            ll mx = *max_element(c.begin(), c.end());
            vector<int> res;
            for (int i = 0; i < n; i++)
                if (c[i] == mx) res.push_back(i + 1);
            cout << res.size() << "\n";
            for (int v : res) cout << v << " ";
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
