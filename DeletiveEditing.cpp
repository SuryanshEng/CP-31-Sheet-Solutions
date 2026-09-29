#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int rounds;
    cin >> rounds;
    while (rounds--) {
        string ganguly, kapil;
        cin >> ganguly >> kapil;

        int have[26] = {0}, want[26] = {0};
        for (char c : ganguly) have[c - 'A']++;
        for (char c : kapil) want[c - 'A']++;

        bool possible = true;
        int toDrop[26];
        for (int i = 0; i < 26; i++) {
            toDrop[i] = have[i] - want[i];
            if (toDrop[i] < 0) possible = false;
        }

        if (possible) {
            int seenSoFar[26] = {0};
            string leftover;
            leftover.reserve(ganguly.size());
            for (char c : ganguly) {
                int idx = c - 'A';
                if (seenSoFar[idx] < toDrop[idx]) {
                    seenSoFar[idx]++;
                } else {
                    leftover.push_back(c);
                }
            }
            possible = (leftover == kapil);
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
}
