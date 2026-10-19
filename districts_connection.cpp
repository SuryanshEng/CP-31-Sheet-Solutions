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
            int other = -1;
            for (int i = 2; i <= n; i++)
                if (a[i] != a[1]) {
                    other = i;
                    break;
                }
            if (other == -1) {
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            for (int i = 2; i <= n; i++) {
                if (a[i] != a[1]) cout << 1 << " " << i << "\n";
                else cout << other << " " << i << "\n";
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
