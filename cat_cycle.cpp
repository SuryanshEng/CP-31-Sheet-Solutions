#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            ll n, k;
            cin >> n >> k;
            ll skips = n % 2 ? (k - 1) / ((n - 1) / 2) : 0;
            cout << (k - 1 + skips) % n + 1 << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
