#include <bits/stdc++.h>
using namespace std;

int xorUpTo(int n) {
    switch (n % 4) {
        case 0: return n;
        case 1: return 1;
        case 2: return n + 1;
        default: return 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int x = xorUpTo(a - 1);
        int ans;
        if (x == b)
            ans = a;
        else if ((x ^ b) != a)
            ans = a + 1;
        else
            ans = a + 2;
        cout << ans << "\n";
    }
    return 0;
}
