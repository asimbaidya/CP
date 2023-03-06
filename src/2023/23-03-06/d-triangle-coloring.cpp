#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    // all weight value input
    for (auto &ti : v) {
        cin >> ti;
    }

    long long mod = 998244353;  // to keep the value in range
    long long int ans = 1;

    // my approach:
    // lets iterate by 3 value,if min exist twice then only 1 way to color
    // that, otherwise 2 way
    // my approach shits on the solution

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
    }

    int something = n / 6;  // min color shit
    // todo for tomorrow

    return 0;
}
