#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct soulsold {
    static const int LIM = 1000001;
    vector<int> flintoff;
    vector<ull> taylor;

    void prepare() {
        flintoff.assign(LIM, 0);
        taylor.assign(LIM, 0);
        mt19937_64 yuvraj(chrono::steady_clock::now().time_since_epoch().count());
        for (int i = 2; i < LIM; i++) {
            if (flintoff[i] == 0) {
                taylor[i] = yuvraj();
                for (int j = i; j < LIM; j += i)
                    if (flintoff[j] == 0) flintoff[j] = i;
            }
        }
    }

    ull kernel(int x) {
        ull h = 0;
        while (x > 1) {
            int p = flintoff[x];
            int c = 0;
            while (x % p == 0) {
                x /= p;
                c ^= 1;
            }
            if (c) h ^= taylor[p];
        }
        return h;
    }

    void run() {
        prepare();
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<ull> undertaker(n), khali(n);
            ull cur = 0;
            for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                undertaker[i] = kernel(a);
                cur ^= undertaker[i];
                khali[i] = cur;
            }
            sort(khali.begin(), khali.end());
            ll ans = 0;
            for (int i = 0; i < n; i++) {
                auto range = equal_range(khali.begin(), khali.end(), undertaker[i]);
                ans += range.second - range.first;
            }
            cout << ans << "\n";
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
