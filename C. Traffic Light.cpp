#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        s+=s;
        int g=-1,r=0;
        for(int i=2*n-1;i>=0;i--){
            if(s[i]=='g')g=i;
            else if(i<n&&s[i]==c)r=max(r,g-i);
        }
        cout<<r<<"\n";
    }
}
