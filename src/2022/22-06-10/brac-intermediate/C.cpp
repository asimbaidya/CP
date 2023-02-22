#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    for (int _test = 1; _test <= test; _test++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &ti : v) {
            cin >> ti;
        }

        int good = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == i + 1) {
                good++;
            }
        }

        cout << "Case " << _test << ": " << (n - good) / 2 << "\n";
    }
    return 0;
}
