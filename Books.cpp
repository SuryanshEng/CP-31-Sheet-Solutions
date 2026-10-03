#include <bits/stdc++.h>
int main(){int n,t,s=0,l=0,r=0;scanf("%d %d",&n,&t);int a[n];for(int&x:a)scanf("%d",&x);for(int i=0;i<n;i++){s+=a[i];while(s>t)s-=a[l++];r=std::max(r,i-l+1);}printf("%d",r);}
