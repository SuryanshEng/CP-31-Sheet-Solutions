#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int cnt[26] = {}, odd = 0;
        for (char c : s) { cnt[c - 'a']++; }
        for (int i = 0; i < 26; i++) { odd += cnt[i] & 1; }
        cout << (odd <= k + 1 ? "YES" : "NO") << "\n";
    }
}