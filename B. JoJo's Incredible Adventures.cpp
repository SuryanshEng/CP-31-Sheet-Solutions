#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long n = s.size();

        if (count(s.begin(), s.end(), '1') == n) {
            cout << n * n << "\n";
            continue;
        }

        string d = s + s;
        long long run = 0, best = 0;
        for (char c : d) {
            if (c == '1') {
                run++;
                best = max(best, run);
            } else {
                run = 0;
            }
        }
        best = min(best, n);

        long long k = best + 1;
        cout << (k / 2) * ((k + 1) / 2) << "\n";
    }
    return 0;
}
