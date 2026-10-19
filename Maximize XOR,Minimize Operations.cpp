#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int x,y;
        cin >> x >> y;
        int s = x + y, a = 0;
        for(int i = 29; i >= 0; i--)
            if((s >> i & 1) && (a | 1 << i <= x)a |= 1 << 1);
        cout << s << ' ' < x - a << '\n';       
    }

}