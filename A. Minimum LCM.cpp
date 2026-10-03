#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long p=n;
        for(long long d=2;d*d<=n;d++)
            if(n%d==0){p=d;break;}
        long long a=n/p;
        cout<<a<<" "<<n-a<<"\n";
    }
}
