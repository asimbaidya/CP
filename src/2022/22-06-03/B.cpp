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
        vector<int> v(n);
        for (auto &ti : v) {
            cin >> ti;
        }

        //
        vector<int> o(n, 0);

        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 1) {
                continue;
            } else {
                int cnt = 0;
                while (v[i] % 2 != 1) {
                    v[i] /= 2;
                    cnt++;
                }
                o[i] = cnt;
            }
        }

        int m = *min_element(o.begin(), o.end());
        int evens = 0;
        for (int i = 0; i < n; i++) {
            if (o[i] != 0) {
                evens++;
            }
        }

        if (m == 0) {
            cout << evens << "\n";
        } else {
            cout << m + evens - 1 << "\n";
        }
    }

    return 0;
}
