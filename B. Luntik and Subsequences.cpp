#include <bits/stdc++.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        long long c0=0,c1=0;
        while(n--){ long long x; scanf("%lld",&x); c0+=x==0; c1+=x==1; }
        printf("%lld\n",c1<<c0);
    }
}
