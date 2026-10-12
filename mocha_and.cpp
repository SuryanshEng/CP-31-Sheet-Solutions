#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            int rock = -1;
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                rock &= x;
            }
            cout << rock << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
    return 0;
}
