#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 50000;
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; (long long)i * i <= N; i++)
        if (isPrime[i])
            for (int j = i * i; j <= N; j += i) isPrime[j] = false;

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        int p = d + 1;
        while (!isPrime[p]) p++;
        int q = p + d;
        while (!isPrime[q]) q++;
        cout << (long long)p * q << "\n";
    }
    return 0;
}
