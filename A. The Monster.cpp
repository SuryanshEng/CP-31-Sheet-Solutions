#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll egcd(ll a, ll b, ll &x, ll &y) {
    if (!b) return x = 1, y = 0, a;
    ll X, Y, g = egcd(b, a % b, X, Y);
    x = Y, y = X - (a / b) * Y;
    return g;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll g = gcd(a, c);
    if ((d - b) % g) return cout << -1, 0;

    ll x, y;
    egcd(a / g, c / g, x, y);

    ll k = (__int128)((d - b) / g) * ((x % (c / g) + c / g) % (c / g)) % (c / g);
    cout << b + a * k;
}