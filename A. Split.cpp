#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int> suf(n+1,0);
        bitset<26> seen;
        for(int i=n-1;i>=0;i--){
            seen[s[i]-'a']=1;
            suf[i]=seen.count();
        }
        seen.reset();
        int r=0;
        for(int i=0;i<n-1;i++){
            seen[s[i]-'a']=1;
            r=max(r,(int)seen.count()+suf[i+1]);
        }
        cout<<r<<"\n";
    }
}
