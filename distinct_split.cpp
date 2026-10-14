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
            vector<int> flintoff(26, 0), root(26, 0);
            int left = 0, right = 0;
            for (char c : s)
                if (!root[c - 'a']++) right++;
            int ans = 0;
            for (int i = 0; i + 1 < n; i++) {
                int c = s[i] - 'a';
                if (!flintoff[c]++) left++;
                if (!--root[c]) right--;
                ans = max(ans, left + right);
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
