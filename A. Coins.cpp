#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        long long n,k; cin >> n >> k;
        cout << ((n%2==0 || k%2) ? "YES\n" : "NO\n");
    }
}