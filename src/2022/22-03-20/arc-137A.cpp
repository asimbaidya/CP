#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    long long int l, r;
    cin >> l >> r;

    long long int ans = 0;

    for (long long int i = l; i <= min(l + 30, r); i++) {
        for (long long int j = r; j >= max(l, r - 30); j--) {
            if (i < j && __gcd(j, i) == 1 && j - i > ans) {
                ans = j - i;
            }
        }
    }

    cout << ans << "\n";

    return 0;
};
