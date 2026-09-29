#include <bits/stdc++.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long x,n; scanf("%lld %lld",&x,&n);
        int s=(x&1)?-1:1; // even: +1, odd: -1
        switch(n%4){
            case 1: x-=s*n; break;
            case 2: x+=s; break;
            case 3: x+=s*(n+1); break;
        }
        printf("%lld\n",x);
    }
}
