#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long knowledge = 0;
        for (int s = 0; s < 3; s++) {
            bool stopped = false;
            for (int i = 0; i < n; i++) {
                long long v;
                cin >> v;
                if (stopped) continue;
                if ((v | x) == x)
                    knowledge |= v;
                else
                    stopped = true;
            }
        }

        cout << (knowledge == x ? "Yes" : "No") << "\n";
    }
    return 0;
}
