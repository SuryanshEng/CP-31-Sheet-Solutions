#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b, n, x;
        scanf("%lld %lld %lld", &a, &b, &n);
        while (n--) scanf("%lld", &x), b += min(x, a - 1);
        printf("%lld\n", b);
    }
}