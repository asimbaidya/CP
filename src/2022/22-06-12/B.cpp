#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (auto &ti : v) {
        cin >> ti;
    }

    sort(v.begin(), v.end());

    vector<long long> prefix_sum(n);
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = v[i] + prefix_sum[i - 1];
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        if (y == n) {
            cout << prefix_sum[n - 1] << "\n";
        } else {
            x--;
            y--;
            int p = n - (x - y) - 1;
            int q = n - x - 2;  //  part to exclude
                                //
            if (q < 0) {
                cout << prefix_sum[p] << "\n";
            } else {
                cout << prefix_sum[p] - prefix_sum[q] << "\n";
            }
        }
    }

    return 0;
}
