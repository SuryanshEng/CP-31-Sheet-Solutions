#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n + 1);
            for (int i = 1; i <= n; i++) cin >> a[i];
            int l = 1, r = n, lo = 1, hi = n;
            bool found = false;
            while (l <= r) {
                if (a[l] == lo) l++, lo++;
                else if (a[l] == hi) l++, hi--;
                else if (a[r] == lo) r--, lo++;
                else if (a[r] == hi) r--, hi--;
                else {
                    cout << l << " " << r << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << -1 << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
