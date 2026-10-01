#include <bits/stdc++.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        puts(n&(n-1)?"YES":"NO"); // NO only for powers of two
    }
}
