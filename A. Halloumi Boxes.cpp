#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        if (k >= 2) {
            cout << "YES\n";
        } 
        else {
            if (is_sorted(a.begin(), a.end()))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}