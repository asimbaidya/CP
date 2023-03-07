// https://codeforces.com/problemset/problem/1795/D
// Day2

#include <bits/stdc++.h>
using namespace std;

// given to do modulo
long long int reducer = 998244353;

long long int fact(long long int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

long long int nPr(long long int n, long long int r) {
    return fact(n) / fact(n - r);
}

long long int nCr(long long int n, long long int r) {
    return fact(n) / ((fact(r) * fact(n - r)));
}

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
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
