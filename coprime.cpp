#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> last(1001, 0), vals;
            for (int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                last[x] = i;
            }
            for (int v = 1; v <= 1000; v++)
                if (last[v]) vals.push_back(v);
            int ans = -1;
            for (int v : vals)
                for (int w : vals)
                    if (__gcd(v, w) == 1) ans = max(ans, last[v] + last[w]);
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
