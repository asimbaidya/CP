#include <bits/stdc++.h>
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int xy[4][2] = {
    {0, +1},
    {0, -1},
    {+1, 0},
    {-1, 0},
};

int dj_k_k(vector<vector<char>> g, pair<int, int> s, int n, int m) {
    int time = 0;

    queue<pair<int, int>> q;
    map<pair<int, int>, bool> visited;

    q.push(s);  // push start
    visited[s] = true;

    while (!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            pair<int, int> c =
                make_pair(u.first + xy[i][0], u.second + xy[i][1]);

            if (c.first < n && c.second < m && visited[c] == false &&
                g[c.first][c.second] != '#' && g[c.first][c.second] != 'm') {
                if (g[u.first][u.second] == 'h') {
                    return time;
                }
                visited[c] = true;
                q.push(c);
            }
        }
        time++;
    }
    return -1;
}

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> g(n);

        vector<pair<int, int>> start(3);
        int k = 0;

        for (int i = 0; i < n; i++) {
            vector<char> v(m);
            for (int j = 0; j < m; j++) {
                cin >> v[j];

                if (v[j] == 'b' || v[j] == 'a' || v[j] == 'c') {
                    start[k] = make_pair(i, j);
                    k++;
                }
            }
            g[i] = v;
        }

        for (auto x : start) {
            int ans = dj_k_k(g, x, n, m);
            show(ans);
        }
    }
    return 0;
}
