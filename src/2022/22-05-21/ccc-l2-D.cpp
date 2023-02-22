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

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] != 0) {
                ans = i;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
