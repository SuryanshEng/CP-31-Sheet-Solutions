#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int runs = 0;
        bool inBlock = false;
        for(int i=0;i<n;i++){
            long long x; cin >> x;
            if(x != 0){
                if(!inBlock){ runs++; inBlock = true; }
            } else {
                inBlock = false;
            }
        }
        cout << min(runs, 2) << "\n";
    }
}