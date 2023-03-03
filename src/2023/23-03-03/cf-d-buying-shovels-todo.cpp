// https://codeforces.com/problemset/problem/1360/D

#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test >> ws;
    while (test--) {
        int n, k;
        cin >> n >> k;

        int ans = n;  //
        // for (int x = 1; x * x <= n; x++) {
        //     if (n % x == 0) {
        //         // x is divisor of n
        //         if (x <= k) {
        //             // why min ?
        //             ans = min(ans, n / x);
        //         }
        //         // n/x -> divisor of n
        //         if (n / x <= k) {
        //             // why min ?
        //             ans = min(ans, x);
        //         }
        //     }
        // }
        //
        cout << ans << "\n";
    }

    return 0;
}
