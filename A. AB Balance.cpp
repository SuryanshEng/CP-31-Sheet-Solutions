#include <bits/stdc++.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        char s[105]; scanf("%s",s);
        int n=strlen(s);
        s[n-1]=s[0]; // AB(s)==BA(s) iff first and last chars are equal
        puts(s);
    }
}
