#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    int attempt(const string &s, char c) {
        int l = 0, r = (int)s.size() - 1, erased = 0;
        while (l < r) {
            if (s[l] == s[r]) l++, r--;
            else if (s[l] == c) l++, erased++;
            else if (s[r] == c) r--, erased++;
            else return INT_MAX;
        }
        return erased;
    }

    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
            int ans = INT_MAX;
            for (char c = 'a'; c <= 'z'; c++) ans = min(ans, attempt(s, c));
            cout << (ans == INT_MAX ? -1 : ans) << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
