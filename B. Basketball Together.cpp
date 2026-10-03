#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,d;
    cin>>n>>d;
    vector<long long> p(n);
    for(auto&x:p)cin>>x;
    sort(p.rbegin(),p.rend());
    long long l=0,r=n-1,w=0;
    while(l<=r){
        long long k=d/p[l]+1;
        if(r-l+1<k)break;
        r-=k-1;
        l++;
        w++;
    }
    cout<<w<<"\n";
}
