#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (auto &ti : x) {
        cin >> ti;  // is the price of drink at shop xi
    }

    // lets sort the list
    sort(x.begin(), x.end());

    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;

        vector<int>::iterator it = upper_bound(x.begin(), x.end(), q);
        cout << it - x.begin() << nl;

        // lets try iterative
        // valid, but TLE, cuz otherwise it becomes O(n log(n)) * m ; where n,m
        // = 1e5 => TLE
        // int ans = 0; int i = 0;
        // while (i < n && x[i] <= q) {
        //     ans++;
        //     i++;
        // }
        // cout << ans << nl;
    }
    return 0;
}
