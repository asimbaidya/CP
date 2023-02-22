#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        long long n;
        cin >> n;

        if (n % 4 != 0 && n % 6 != 0) {
            cout << -1 << "\n";
        } else {
            long long mx = n / 4;
            long long mn = n / 6;

            while (mx > 0 && (n - mx * 4) % 6 != 0) {
                mx--;
            }
            while (mn > 0 && (n - mn * 6) % 4 != 0) {
                mn--;
            }

            long long a = mx + (n - (4 * mx)) / 6;
            long long b = mn + (n - (6 * mn)) / 4;

            // what possibly can go  wrong  :( ??
            cout << min(a, b) << " " << max(a, b) << "\n";
        }
    }

    return 0;
};
