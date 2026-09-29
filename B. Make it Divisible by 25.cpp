#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        char b[25]; scanf("%s",b);
        string s=b; int n=s.size(), r=n;
        for(string p:{"00","25","50","75"}){
            int j=n-1; while(j>=0&&s[j]!=p[1]) j--;
            int i=j-1; while(i>=0&&s[i]!=p[0]) i--;
            if(i>=0) r=min(r,(n-1-j)+(j-1-i));
        }
        printf("%d\n",r);
    }
}
