#include <bits/stdc++.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long a,b,c; scanf("%lld %lld %lld",&a,&b,&c);
        long long x=2*b-c, y=2*b-a;
        bool ok=(x>0&&x%a==0)||((a+c)%2==0&&(a+c)/2%b==0)||(y>0&&y%c==0);
        puts(ok?"YES":"NO");
    }
}