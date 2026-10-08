#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int balance = 0, worst = 0;
        for (char c : s) {
            balance += (c == '(') ? 1 : -1;
            worst = min(worst, balance);
        }
        cout << -worst << "\n";
    }
    return 0;
}
