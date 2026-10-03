#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    char min_char = 'z' + 1;
    for (char c : s) {
        if (min_char < c) {
            cout << "Ann\n";
        } else {
            cout << "Mike\n";
            min_char = c;
        }
    }

    return 0;
}