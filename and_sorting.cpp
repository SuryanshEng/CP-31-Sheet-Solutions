#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            int ans = -1;
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                if (x != i) ans &= x;
            }
            cout << ans << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
