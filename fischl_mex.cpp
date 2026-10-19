#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
            bool done = false;
            for (int len = 1; len <= 3 && !done; len++) {
                set<string> seen;
                for (int i = 0; i + len <= n; i++) seen.insert(s.substr(i, len));
                int total = 1;
                for (int i = 0; i < len; i++) total *= 26;
                for (int code = 0; code < total; code++) {
                    string cand(len, 'a');
                    int v = code;
                    for (int p = len - 1; p >= 0; p--) cand[p] = 'a' + v % 26, v /= 26;
                    if (!seen.count(cand)) {
                        cout << cand << "\n";
                        done = true;
                        break;
                    }
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
