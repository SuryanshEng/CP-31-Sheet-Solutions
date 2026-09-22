#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long k = 1;
    while (n % k == 0) {
        k++;
    }
    
    cout << k - 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}