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
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        int need = 0;
        for (auto &ti : v) {
            cin >> ti;
            need += ti;
        }

        cout << max(need - m, 0) << "\n";
    }

    return 0;
}
