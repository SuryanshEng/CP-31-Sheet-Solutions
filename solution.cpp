#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int t = max(b, d); t <= 20000; t++) {
        if ((t - b) % a == 0 && (t - d) % c == 0) {
            cout << t << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
