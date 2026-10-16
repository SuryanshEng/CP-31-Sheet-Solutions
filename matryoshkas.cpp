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
            vector<ll> a(n);
            for (auto &x : a) cin >> x;
            sort(a.begin(), a.end());
            ll ans = 0, prevVal = LLONG_MIN, prevCnt = 0;
            for (int i = 0; i < n;) {
                int j = i;
                while (j < n && a[j] == a[i]) j++;
                ll cnt = j - i;
                if (prevVal + 1 == a[i]) ans += max(0LL, cnt - prevCnt);
                else ans += cnt;
                prevVal = a[i];
                prevCnt = cnt;
                i = j;
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
