// https://codeforces.com/problemset/problem/1360/D
// fuck edge conditions

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

        int max_divisor = 1;  // true if the number if prime
        // lets handle edge case of 2 being divisor
        for (int i = 2; i * i <= n; i++) {
            // sqrt(n) is the range for maximum divosor, tho, if
            // n%i == 0, n/i also be a divisor which also can be maximum
            // considering situation,
            // ... yes, but can not guarantee that, n/i will be less than k,
            // thus we  can not stop searching, if `i` < k && `n/i` !< k, then
            // a valuable answer might exist in forward range
            if (n % i == 0) {
                if (i <= k) {
                    max_divisor = max(i, max_divisor);
                }
                if (n / i <= k) {
                    max_divisor = max(n / i, max_divisor);
                }
            }
        }
        // found max divisor that is less than k, ans = n/max_divisor
        // but need to handle edge case if the number if eqal or greater to n,
        // as we are not iterating whole range
        if (k >= n) {
            cout << "1\n";
        } else {
            cout << n / max_divisor << "\n";
        }
    }

    return 0;
}
