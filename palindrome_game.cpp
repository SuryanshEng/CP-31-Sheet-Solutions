#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
            int zeros = count(s.begin(), s.end(), '0');
            cout << ((zeros & 1) && zeros > 1 ? "ALICE" : "BOB") << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
