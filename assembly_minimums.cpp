#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            int m = n * (n - 1) / 2;
            vector<int> b(m);
            for (auto &x : b) cin >> x;
            sort(b.begin(), b.end());
            int idx = 0;
            for (int i = n - 1; i >= 1; i--) {
                cout << b[idx] << " ";
                idx += i;
            }
            cout << 1000000000 << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
