#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        vector<int> a(n);
        for(auto&x:a) scanf("%d",&x);
        sort(a.begin(),a.end());
        int m=0;
        for(int i=0,j=0;i<n;i=j){
            while(j<n&&a[j]==a[i]) j++;
            m=max(m,j-i);
        }
        int r=0;
        while(m<n){
            r+=1+min(m,n-m);
            m*=2;
        }
        printf("%d\n",r);
    }
}