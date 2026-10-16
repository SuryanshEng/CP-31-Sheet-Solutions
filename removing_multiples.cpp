#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
            vector<int> cost(n + 1);
            for (int i = 1; i <= n; i++) cost[i] = i;
            for (int i = 1; i <= n; i++) {
                if (s[i - 1] == '1') continue;
                for (int j = i; j <= n && s[j - 1] == '0'; j += i) cost[j] = min(cost[j], i);
            }
            ll ans = 0;
            for (int i = 1; i <= n; i++)
                if (s[i - 1] == '0') ans += cost[i];
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
