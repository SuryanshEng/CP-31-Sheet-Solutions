#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct soulsold {
    bool prime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0) return false;
        return true;
    }

    int nxt(int x) {
        while (!prime(x)) x++;
        return x;
    }

    void run() {
        int t;
        cin >> t;
        while (t--) {
            int d;
            cin >> d;
            int p = nxt(d + 1);
            int q = nxt(p + d);
            cout << (ll)p * q << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
