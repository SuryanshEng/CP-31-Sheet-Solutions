#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b,xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<long long,long long>> K, Q;

        for (auto [u,v] : {pair{a,b}, pair{b,a}})
            for (int sx : {-1,1})
                for (int sy : {-1,1}) {
                    K.insert({xk + sx*u, yk + sy*v});
                    Q.insert({xq + sx*u, yq + sy*v});
                }

        int ans = 0;
        for (auto p : K)
            ans += Q.count(p);

        cout << ans << '\n';
    }
}