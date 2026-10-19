#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        vector<array<int, 2>> res;
        string out;
        while (t--) {
            int n;
            cin >> n;
            int odds = 0, evens = 0;
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                if (x < 1 || x > 1000000) {
                    cout << -1 << "\n";
                    return;
                }
                if (x & 1) odds++;
                else evens++;
            }
            bool lose = (evens == 0 && odds == 3) || (evens == 1 && odds == 1);
            out += lose ? "Larpity\n" : "Moggity\n";
        }
        cout << out;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
