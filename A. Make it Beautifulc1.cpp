#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        vector<int> a(n);
        for(auto &x:a) scanf("%d",&x);
        sort(a.begin(), a.end());

        if(a[0]==a[n-1]){
            puts("NO");
            continue;
        }

        puts("YES");
        if(a[n-1]!=a[n-2]){
            for(int i=n-1;i>=0;i--) printf("%d ", a[i]);
        } else {
            printf("%d ", a[0]);
            for(int i=n-1;i>=1;i--) printf("%d ", a[i]);
        }
        puts("");
    }
}