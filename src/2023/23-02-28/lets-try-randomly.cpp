// https://codeforces.com/problemset/problem/459/B
#include <bits/stdc++.h>
//#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
//#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

long long int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &ti : v) {
        cin >> ti;
        mp[ti]++;
    }

    sort(v.begin(), v.end());

    int md;  // max difference
    md = v[n - 1] - v[0];

    long long ans = 0;
    // TLE; so lets use map
    // for (int i = n - 1; i >= 0; i--) {
    //     for (int j = 0; j < i; j++) {
    //         if (v[i] - v[j] == md) {
    //             ans++;
    //         } else {
    //             break;
    //         }
    //     }
    // }

    // shit shit  shit
    int sm = v[0];
    int mx = v[n - 1];

    if (mx == sm) {
        cout << md << " " << (long long)((long long)n * (n - 1)) / 2 << "\n";
    } else {
        cout << md << " " << (long long)mp[sm] * (long long)mp[mx] << "\n";
    }

    return 0;
}
