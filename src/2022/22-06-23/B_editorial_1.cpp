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

        if (n % 2 == 1) {
            cout << "Mike\n";
        } else {
            int a = 0;
            for (int i = 1; i < n; i++) {
                if (v[i] < v[a]) {
                    a = i;
                }
            }

            if (a % 2 == 0) {
                cout << "Joe\n";
            } else {
                cout << "Mike\n";
            }
        }
    }

    return 0;
}
