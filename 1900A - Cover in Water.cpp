#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;

        if (s.find("...") != string::npos) cout << 2 << '\n';
        else cout << count(s.begin(), s.end(), '.') << '\n';
    }
}

