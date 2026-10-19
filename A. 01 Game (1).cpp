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
        int c=count(s.begin(),s.end(),'0');
        int m=min(c,(int)s.size()-c);
        cout<<(m&1?"DA":"NET")<<"\n";
    }
}
