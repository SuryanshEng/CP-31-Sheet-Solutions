#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    bool check(const vector<int> &a, int x) {
        int l = 0, r = (int)a.size() - 1;
        while (l < r) {
            if (a[l] == x) l++;
            else if (a[r] == x) r--;
            else if (a[l] == a[r]) l++, r--;
            else return false;
        }
        return true;
    }

    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (auto &x : a) cin >> x;
            int l = 0, r = n - 1;
            while (l < r && a[l] == a[r]) l++, r--;
            bool ok = l >= r || check(a, a[l]) || check(a, a[r]);
            cout << (ok ? "YES" : "NO") << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
