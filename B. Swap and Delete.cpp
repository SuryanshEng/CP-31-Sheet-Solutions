#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int c[2]={0,0};
        for(char ch:s)c[ch-'0']++;
        int i=0;
        while(i<n&&c[1-(s[i]-'0')]>0){
            c[1-(s[i]-'0')]--;
            i++;
        }
        cout<<n-i<<"\n";
    }
}
