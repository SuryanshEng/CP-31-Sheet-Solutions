#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, sum = 0;
        cin >> n;

        while (n--) {
            int x;
            cin >> x;
            sum += x;
        }

        cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
    }
}