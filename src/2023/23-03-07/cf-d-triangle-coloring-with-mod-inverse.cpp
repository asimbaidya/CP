#include <bits/stdc++.h>
using namespace std;

long long int reducer = 998244353;
long long int fact(long long int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0 || n == 1) {
        return 1;
    }
    return (n * fact(n - 1) % reducer) % reducer;
}

// sucks
// long long int nCr(long long int n, long long int r) {
//     cout << n << "\n";
//     cout << r << "\n";
//     long long int deno = (long long int)fact(n) % reducer;
//     long long int nomi =
//         (long long int)(fact(r) % reducer * fact(n - r) % reducer);
//     nomi %= reducer;
//     return deno / nomi;
// }

// helper code from net as I did not know modInverse now
// but this is my new learnign goal :(
long long int modInverse(long long int a, long long int p) {
    long long int res = 1;
    long long int exp = p - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        exp /= 2;
    }
    return res;
}
long long int nCr(long long int n, long long int r) {
    if (r > n) {
        return 0;
    }
    long long int deno = 1;
    long long int nomi = 1;
    for (int i = 0; i < r; i++) {
        nomi = (nomi * (n - i)) % reducer;
        deno = (deno * (i + 1)) % reducer;
    }
    return (nomi * modInverse(deno, reducer)) % reducer;
}

void test() {
    int n = 300000;
    cout << nCr(n / 3, n / 6) << "\n";
}
int main() {
    // test();
    /// FIO but do not use printf / scanf ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &ti : v) {
        cin >> ti;
    }

    long long int ans = 1;

    map<int, int> mp;
    for (int i = 0; i < n; i += 3) {
        int a = v[i];
        int b = v[i + 1];
        int c = v[i + 2];
        int mn = min({a, b, c});
        int cnt = 0;
        if (mn == a) {
            cnt++;
        }
        if (mn == b) {
            cnt++;
        }
        if (mn == c) {
            cnt++;
        }

        ans *= cnt;
        ans %= reducer;
    }

    long long int f = nCr(n / 3, n / 6);
    f %= reducer;
    ans *= f;
    ans %= reducer;
    cout << ans << "\n";
}
