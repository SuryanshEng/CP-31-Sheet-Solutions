#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<long long> seen;
        bool dup = false;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (!seen.insert(x).second) dup = true;
        }
        cout << (dup ? "YES" : "NO") << "\n";
    }
    return 0;
}
