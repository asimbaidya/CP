#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int a, b, n;
        cin >> a >> b >> n;

        int ans = 0;

        /// debug: 2
        if (a < b) {
            int tmp = a;
            a = b;
            b = tmp;
        }

        // NOTE:
        // after operation, a & b become a+b,
        // updating smaller number first is beneficial
        // cuz, total produce larger sum, or something

        for (int i = 0; n >= a && n >= b; i++) {
            if (i % 2 == 0) {
                b += a;
            } else {
                a += b;
            }

            // /// debug: 1
            // if (a > b) {
            //     b += a;
            // } else {
            //     a += b;
            // }

            ans += 1;
        }
        cout << ans << "\n";
    }

    return 0;
}
