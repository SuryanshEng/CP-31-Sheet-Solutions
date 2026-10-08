#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &v : a) cin >> v;
        for (auto &v : b) cin >> v;

        int l = 0, r = n - 1;
        while (a[l] == b[l]) l++;
        while (a[r] == b[r]) r--;

        while (l > 0 && b[l - 1] <= b[l]) l--;
        while (r < n - 1 && b[r + 1] >= b[r]) r++;

        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}
