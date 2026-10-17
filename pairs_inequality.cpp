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
            vector<ll> a(n + 1);
            vector<int> pref(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                cin >> a[i];
                pref[i] = pref[i - 1] + (a[i] < i);
            }
            ll ans = 0;
            for (int j = 1; j <= n; j++)
                if (a[j] < j && a[j] >= 1) ans += pref[a[j] - 1];
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
