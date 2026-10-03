#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x0, y0;
    cin >> n >> x0 >> y0;

    set<pair<int, int>> s;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;

        int dx = x - x0;
        int dy = y - y0;

        int g = gcd(abs(dx), abs(dy));
        dx /= g;
        dy /= g;

        // Same line in both directions
        if (dx < 0 || (dx == 0 && dy < 0))
            dx = -dx, dy = -dy;

        s.insert({dx, dy});
    }

    cout << s.size() << '\n';
    return 0;
}