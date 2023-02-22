#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
#define e9 1000000000
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;

        // int ans = 0;
        // ans = n / 3;
        // n %= 3;
        // if (n == 0) {
        //     cout << ans << "\n";
        // } else if (n == 1 && ans == 0) {
        //     cout << ans + 2 << "\n";
        // } else {
        //     cout << ans + 1 << "\n";
        // }

        // or
        if (n == 1) {
            cout << 2 << "\n";
        } else if (n == 2 or n == 3) {
            cout << 1 << "\n";
        } else {
            // NOTE: (double) this shit matters while int/int.
            // NOTE: of just add int.0 like 2 -> 2.0 to make it easier for cmp.
            // cout << ceil((double)n / 3) << "\n";
            cout << ceil(n / 3.0) << "\n";
            // cout << ceil(n / 3) << "\n";
        }
    }

    return 0;
}
