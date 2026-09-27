#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt[26] = {0};
        for(int i = 0; i < n; i++) cnt[s[i]-'a']++;

        long long P = 0;
        long long S = 0;
        for(int i = 0; i < 26; i++){
            P += cnt[i] / 2;
            S += cnt[i] & 1;
        }

        int lo = 1, hi = n, ans = 1;
        auto check = [&](int L) -> bool {
            long long pbase = L / 2;
            if((long long)k * pbase > P) return false;
            if(L & 1){
                long long rem = P - (long long)k * pbase;
                if(S + 2 * rem < k) return false;
            }
            return true;
        };

        while(lo <= hi){
            int mid = (lo + hi) / 2;
            if(check(mid)){ ans = mid; lo = mid + 1; }
            else hi = mid - 1;
        }

        cout << ans << "\n";
    }
    return 0;
}
