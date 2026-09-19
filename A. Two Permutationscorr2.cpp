#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        puts((a == n && b == n) || a + b <= n - 2 ? "Yes" : "No");
    }
}