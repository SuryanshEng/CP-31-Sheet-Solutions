#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    set<int> st;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        st.insert(x);
    }

    if ((int)st.size() > k) {
        cout << -1 << "\n";
        return;
    }

    vector<int> pattern(st.begin(), st.end());
    while ((int)pattern.size() < k) {
        pattern.push_back(1);
    }

    cout << n * k << "\n";
    for (int i = 0; i < n; ++i) {
        for (int x : pattern) {
            cout << x << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}