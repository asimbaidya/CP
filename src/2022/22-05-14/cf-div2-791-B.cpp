#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (auto &ti : v) {
        cin >> ti;
    }

    int sum = 0;
    for (auto x : v) {
        sum += x;
    }

    queue<int> Q;

    for (int j = 0; j < q; j++) {
        int t, i, x;
        cin >> t;
        if (t == 2) {
            cin >> x;
            sum = v.size() * x;
            cout << v.size() * x << "\n";
            Q.push(x);
        } else {
            // input
            cin >> i >> x;
            // bug
            if (Q.size() != 0) {
                sum -= Q.back();
                sum += x;
            } else {
                sum -= v[i - 1];
                sum += x;
                v[i - 1] = x;
            }
            cout << sum << "\n";
        }
    }

    return 0;
}
