#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int,int> f;
        for (int i = 0, x; i < n; ++i) cin >> x, ++f[x];

        if (f.size() > 2) cout << "No\n";
        else {
            vector<int> v;
            for (auto [x,c] : f) v.push_back(c);
            cout << (v.size() == 1 || max(v[0],v[1]) <= (n+1)/2 ? "Yes\n" : "No\n");
        }
    }
}