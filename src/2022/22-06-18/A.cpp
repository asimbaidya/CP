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
        vector<vector<int>> v(n, vector<int>(m));

        for (auto &x : v) {
            for (auto &ti : x) {
                cin >> ti;
            }
        }
        // bug
        int mx = -INT_MAX;
        pair<int, int> p;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] > mx) {
                    p.first = i + 1;
                    p.second = j + 1;
                    mx = v[i][j];
                }
            }
        }

        // show(p.first);
        // show(p.second);
        // show(v[p.first][p.second]);
        int a = max(p.first, abs(n - p.first) + 1);
        int b = max(p.second, abs(m - p.second) + 1);
        cout << a * b << "\n";
    }

    return 0;
}
