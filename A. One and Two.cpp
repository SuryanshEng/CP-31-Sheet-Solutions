#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n,c=0; cin >> n;
        vector<int>a(n);
        for(int &x:a) cin>>x, c+=x==2;

        int l=0;
        for(int i=0;i<n-1;i++){
            l+=a[i]==2;
            if(l*2==c) { cout<<i+1<<"\n"; goto nxt; }
        }
        cout<<-1<<"\n";
        nxt:;
    }
}