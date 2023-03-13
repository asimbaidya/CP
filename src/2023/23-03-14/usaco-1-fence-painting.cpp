// shit
// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    // // fast io
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    //
    if (a < c && b < c) {
        cout << (b - a) + (d - c) << nl;
    } else if (c < a && d < a) {
        cout << (b - a) + (d - c) << nl;
    } else {
        cout << max({a, b, c, d}) - min({a, b, c, d}) << nl;
    }

    return 0;
}
