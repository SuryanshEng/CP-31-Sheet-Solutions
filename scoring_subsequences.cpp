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
            int d = 0;
            for (int k = 1; k <= n; k++) {
                while (d + 1 <= k && a[k - d] >= d + 1) d++;
                cout << d << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
