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
            vector<int> cnt(2 * n + 1, 0);
            ll ans = 0;
            for (int i = 1; i <= n; i++) {
                int a;
                cin >> a;
                ans += cnt[a - i + n]++;
            }
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
