#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    void run() {
        int n;
        ll k, x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (auto &v : a) cin >> v;
        sort(a.begin(), a.end());
        vector<ll> need;
        for (int i = 1; i < n; i++)
            if (a[i] - a[i - 1] > x) need.push_back((a[i] - a[i - 1] - 1) / x);
        sort(need.begin(), need.end());
        int groups = need.size() + 1;
        for (ll c : need) {
            if (c > k) break;
            k -= c;
            groups--;
        }
        cout << groups << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
