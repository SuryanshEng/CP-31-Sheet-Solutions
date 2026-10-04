#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        // b 'B's split the R's into b+1 groups; spread R's as evenly as possible
        int groups = b + 1;
        int base = r / groups;
        int extra = r % groups;

        string res;
        for (int i = 0; i < groups; i++) {
            int cnt = base + (i < extra ? 1 : 0);
            res.append(cnt, 'R');
            if (i < groups - 1) res.push_back('B');
        }
        cout << res << "\n";
    }
    return 0;
}
