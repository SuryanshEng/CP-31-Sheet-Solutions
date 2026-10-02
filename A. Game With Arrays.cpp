#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0,mn2=LLONG_MAX,g=LLONG_MAX;
        while(n--){
            int m;
            cin>>m;
            long long m1=LLONG_MAX,m2=LLONG_MAX;
            while(m--){
                long long x;
                cin>>x;
                if(x<m1)m2=m1,m1=x;
                else if(x<m2)m2=x;
            }
            sum+=m2;
            mn2=min(mn2,m2);
            g=min(g,m1);
        }
        cout<<sum-mn2+g<<"\n";
    }
}
