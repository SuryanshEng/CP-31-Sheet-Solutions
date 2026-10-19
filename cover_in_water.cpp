#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct soulsold {
    void run() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            string rey;
            cin >> n >> rey;
            int sachin = 0;
            bool kohli = false;
            for (int i = 0; i < n; i++) {
                if (rey[i] == '.') sachin++;
                if (i + 2 < n && rey[i] == '.' && rey[i + 1] == '.' && rey[i + 2] == '.') kohli = true;
            }
            cout << (kohli ? 2 : sachin) << "\n";
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
