#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (auto &x : a) cin >> x;
            int len = 1, ops = 0, x = a[n - 1];
            while (len < n) {
                if (a[n - 1 - len] == x) len++;
                else ops++, len *= 2;
            }
            cout << ops << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
