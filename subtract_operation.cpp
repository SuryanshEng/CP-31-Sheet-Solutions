#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            ll k;
            cin >> n >> k;
            vector<ll> a(n);
            for (auto &x : a) cin >> x;
            sort(a.begin(), a.end());
            bool ok = false;
            for (int i = 0; i < n && !ok; i++) ok = binary_search(a.begin(), a.end(), a[i] - k);
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
