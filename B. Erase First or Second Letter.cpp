#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<bool> seen(26, false);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            if (!seen[c]) {
                seen[c] = true;
                ans += n - i;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
