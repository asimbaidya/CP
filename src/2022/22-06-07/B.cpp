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
        vector<int> a(n);
        vector<int> b(n);
        for (auto &ti : a) {
            cin >> ti;
        }
        for (auto &ti : b) {
            cin >> ti;
        }

        int smol = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] > b[smol]) smol = i;
        }

        int op = a[smol] - b[smol];

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (max(a[i] - op, 0) != b[i]) {
                flag = false;
                break;
            }
        }
        if ((flag && op >= 0) || b[smol] == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
};
