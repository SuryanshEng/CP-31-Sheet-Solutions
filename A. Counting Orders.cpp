#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long MOD = 1000000007LL;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (auto &v : a) cin >> v;
        for (auto &v : b) cin >> v;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<long long>());

        long long ways = 1;
        for (int i = 0; i < n; i++) {
            long long greaterCount = a.end() - upper_bound(a.begin(), a.end(), b[i]);
            long long choices = greaterCount - i;
            if (choices <= 0) {
                ways = 0;
                break;
            }
            ways = ways * (choices % MOD) % MOD;
        }
        cout << ways << "\n";
    }
    return 0;
}
