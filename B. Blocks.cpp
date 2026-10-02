#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin >> n >> s;
    for (char c : {'W', 'B'}) {
        string t = s;
        vector<int> r;
        for (int i = 0; i + 1 < n; i++)
            if (t[i] != c) {
                t[i] = c;
                t[i + 1] = t[i + 1] == 'W' ? 'B' : 'W';
                r.push_back(i + 1);
            }
        if (t[n - 1] == c) {
            cout << r.size() << "\n";
            for (int x : r) cout << x << " ";
            cout << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}
