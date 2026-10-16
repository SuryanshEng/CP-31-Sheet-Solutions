#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    vector<int> top3(const vector<ll> &v) {
        int n = v.size();
        vector<int> id(n);
        iota(id.begin(), id.end(), 0);
        partial_sort(id.begin(), id.begin() + 3, id.end(), [&](int x, int y) { return v[x] > v[y]; });
        id.resize(3);
        return id;
    }

    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<ll> a(n), b(n), c(n);
            for (auto &x : a) cin >> x;
            for (auto &x : b) cin >> x;
            for (auto &x : c) cin >> x;
            vector<int> ta = top3(a), tb = top3(b), tc = top3(c);
            ll ans = 0;
            for (int i : ta)
                for (int j : tb)
                    for (int k : tc)
                        if (i != j && j != k && i != k) ans = max(ans, a[i] + b[j] + c[k]);
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
