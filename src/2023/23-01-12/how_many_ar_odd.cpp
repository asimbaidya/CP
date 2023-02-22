#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 1) {
                ans += 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
