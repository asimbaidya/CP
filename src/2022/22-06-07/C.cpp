#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;
        vector<int> s(n);
        vector<int> f(n);

        for (auto &ti : s) {
            cin >> ti;
        }

        for (auto &ti : f) {
            cin >> ti;
        }

        vector<int> d(n, 0);

        d[0] = f[0] - s[0];
        for (int i = 1; i < n; i++) {
            if (s[i] >= f[i - 1]) {
                d[i] = f[i] - s[i];
            } else {
                d[i] = f[i] - f[i - 1];
            }
        }

        for (auto &ti : d) {
            cout << ti << " ";
        }
        cout << "\n";
    }
    return 0;
}
