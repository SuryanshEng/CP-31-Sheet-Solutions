#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long base=k*b;
        if(base>s||s-base>n*(k-1)){
            cout<<"-1\n";
            continue;
        }
        long long rem=s-base;
        for(int i=0;i<n;i++){
            long long add=min(rem,k-1);
            rem-=add;
            cout<<(i==0?base:0)+add<<" ";
        }
        cout<<"\n";
    }
}
