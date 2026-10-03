#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> presidents = {
        "", "Washington", "Adams", "Jefferson", "Madison", "Monroe",
        "Adams", "Jackson", "Van Buren", "Harrison", "Tyler",
        "Polk", "Taylor", "Fillmore", "Pierce", "Buchanan",
        "Lincoln", "Johnson", "Grant", "Hayes", "Garfield",
        "Arthur", "Cleveland", "Harrison", "Cleveland", "McKinley",
        "Roosevelt", "Taft", "Wilson", "Harding", "Coolidge",
        "Hoover", "Roosevelt", "Truman", "Eisenhower", "Kennedy",
        "Johnson", "Nixon", "Ford", "Carter", "Reagan"
    };

    int a;
    if (cin >> a) {
        cout << presidents[a] << "\n";
    }

    return 0;
}