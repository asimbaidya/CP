#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

// theory: pigeonhole principle
int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test >> ws;
    while (test--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
        }
        if (m < n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
