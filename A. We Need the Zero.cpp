#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int x=0;
        for(int i=0,v;i<n;i++){scanf("%d",&v); x^=v;}
        if(n&1) printf("%d\n",x);
        else printf("%d\n", x==0?0:-1);
    }
}