#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = INT_MAX;

    while (n--) {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }

    cout << ans << '\n';
    return 0;
}

