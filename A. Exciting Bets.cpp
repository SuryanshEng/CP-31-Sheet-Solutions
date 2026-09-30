#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if (a == b) {
            puts("0 0");
            continue;
        }
        long long d = llabs(a - b);
        long long r = a % d;
        printf("%lld %lld\n", d, min(r, d - r));
    }
    return 0;
}
