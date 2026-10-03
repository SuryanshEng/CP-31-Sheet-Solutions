#include <bits/stdc++.h>
using namespace std;

int mask(long long n) {
    int m = 0;
    while (n) { m |= 1 << (n % 10); n /= 10; }
    return m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;
    int mx = mask(x), ans = 0;

    for (long long i = 1; i * i <= x; i++) {
        if (x % i) continue;
        if (mask(i) & mx) ans++;
        long long j = x / i;
        if (j != i && (mask(j) & mx)) ans++;
    }
    cout << ans << "\n";
    return 0;
}
