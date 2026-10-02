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
        int a=0,b=0;
        while(n%2==0)n/=2,a++;
        while(n%3==0)n/=3,b++;
        cout<<(n==1&&a<=b?2*b-a:-1)<<"\n";
    }
}
