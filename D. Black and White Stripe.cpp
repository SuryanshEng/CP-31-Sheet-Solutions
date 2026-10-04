#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        // sliding window: count of 'W' in each window of length k
        int white = 0;
        for (int i = 0; i < k; i++)
            if (s[i] == 'W') white++;
        int best = white;
        for (int i = k; i < n; i++) {
            if (s[i] == 'W') white++;
            if (s[i - k] == 'W') white--;
            best = min(best, white);
        }
        cout << best << "\n";
    }
    return 0;
}
