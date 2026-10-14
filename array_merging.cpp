#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> dhoni(2 * n + 1, 0), kohli(2 * n + 1, 0);
            for (auto *v : {&dhoni, &kohli}) {
                int prev = 0, run = 0;
                for (int i = 0; i < n; i++) {
                    int x;
                    cin >> x;
                    run = (x == prev) ? run + 1 : 1;
                    prev = x;
                    (*v)[x] = max((*v)[x], run);
                }
            }
            int ans = 0;
            for (int i = 1; i <= 2 * n; i++) ans = max(ans, dhoni[i] + kohli[i]);
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
