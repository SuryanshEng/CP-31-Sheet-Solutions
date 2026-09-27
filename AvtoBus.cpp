#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int rounds;
    cin >> rounds;
    while (rounds--) {
        long long dravid;
        cin >> dravid;

        if (dravid % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        long long ambrose = dravid / 2;
        if (ambrose < 2) {
            cout << -1 << "\n";
            continue;
        }

        long long sixWheelHigh = (ambrose % 2 == 0) ? 0 : 1;
        long long fourWheelHigh = (ambrose - 3 * sixWheelHigh) / 2;
        long long maxBuses = fourWheelHigh + sixWheelHigh;

        long long sixWheelLow = ambrose / 3;
        if (sixWheelLow % 2 != ambrose % 2) sixWheelLow--;
        long long fourWheelLow = (ambrose - 3 * sixWheelLow) / 2;
        long long minBuses = fourWheelLow + sixWheelLow;

        cout << minBuses << " " << maxBuses << "\n";
    }
}
