#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // k = highest power of two not exceeding n-1
        int k = 1;
        while (k * 2 <= n - 1) k *= 2;

        // k-1, k-2, ..., 0, then k, k+1, ..., n-1
        for (int i = k - 1; i >= 0; i--) cout << i << " ";
        for (int i = k; i < n; i++) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
