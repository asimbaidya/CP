#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

bool comm(pair<int, int> p1, pair<int, int> p2) {
    return p1.first + p1.second < p2.first + p2.second;
}
int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (auto &ti : grid) {
            cin >> ti;
        }

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 'R') {
                    v.push_back(make_pair(i, j));
                }
            }
        }
        sort(v.begin(), v.end(), comm);

        bool flag = true;
        pair<int, int> r = v[0];

        for (int i = 0; i < r.first; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 'R') {
                    flag = false;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < r.second; j++) {
                if (grid[i][j] == 'R') {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
