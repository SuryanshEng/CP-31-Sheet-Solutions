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
            int k = count(s.begin(), s.end(), '1');
            int lo = s.find('1'), hi = s.rfind('1');
            int ans = k == 1 ? 0 : k == 2 ? 1 : hi - lo;
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
