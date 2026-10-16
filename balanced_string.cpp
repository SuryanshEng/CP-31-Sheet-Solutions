#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            string s;
            cin >> s;
            set<char> uniq(s.begin(), s.end());
            int k = uniq.size();
            bool ok = true;
            for (int i = k; i < (int)s.size() && ok; i++) ok = s[i] == s[i - k];
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
