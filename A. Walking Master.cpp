#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;

        long long u = d-b, l = a+u-c;
        cout << (u >= 0 && l >= 0 ? u+l : -1) << '\n';
    }
}