#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        long long r=0,len=0;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            if(a<=q){
                len++;
                if(len>=k)r+=len-k+1;
            }else len=0;
        }
        cout<<r<<"\n";
    }
}
