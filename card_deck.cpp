#include <bits/stdc++.h>
using namespace std;

struct soulsold {
    void run() {
        int n, q;
        cin >> n >> q;
        vector<int> pos(51, 0);
        for (int i = 1; i <= n; i++) {
            int c;
            cin >> c;
            if (!pos[c]) pos[c] = i;
        }
        while (q--) {
            int c;
            cin >> c;
            cout << pos[c] << " ";
            for (int x = 1; x <= 50; x++)
                if (pos[x] && pos[x] < pos[c]) pos[x]++;
            pos[c] = 1;
        }
        cout << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    soulsold bumrah;
    bumrah.run();
}
