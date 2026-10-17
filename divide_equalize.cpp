#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        const int LIM = 1000001;
        vector<int> spf(LIM, 0);
        for (int i = 2; i < LIM; i++)
            if (!spf[i])
                for (int j = i; j < LIM; j += i)
                    if (!spf[j]) spf[j] = i;
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            map<int, int> cnt;
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                while (x > 1) {
                    int p = spf[x];
                    cnt[p]++;
                    x /= p;
                }
            }
            bool ok = true;
            for (auto &kv : cnt)
                if (kv.second % n) ok = false;
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
