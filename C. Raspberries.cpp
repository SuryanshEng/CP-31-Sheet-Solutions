#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int best=INT_MAX,c2=0;
        bool three=false;
        while(n--){
            int a;
            cin>>a;
            best=min(best,(k-a%k)%k);
            if(a%2==0)c2+=1+(a%4==0);
            if(a%4==3)three=true;
        }
        if(k==4){
            best=max(0,2-c2);
            if(three&&best>1)best=1;
        }
        cout<<best<<"\n";
    }
}
