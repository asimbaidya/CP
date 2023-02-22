#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "

using namespace std;

string s, t;

int memo[5005][5005];

// int cnt = 0;
int ed(int x, int y) {
    // show(cnt);
    // cnt++;
    if (x == 0 || y == 0) {
        return x + y;
    }
    if (memo[x][y] != -1) {
        return memo[x][y];
    }

    if (s[x - 1] == t[y - 1]) {
        int ans = min({ed(x - 1, y - 1), ed(x - 1, y) + 1, ed(x, y - 1) + 1,
                       ed(x - 1, y - 1) + 1});
        memo[x][y] = ans;
        return ans;
    } else {
        int ans =
            min({ed(x - 1, y) + 1, ed(x, y - 1) + 1, ed(x - 1, y - 1) + 1});
        memo[x][y] = ans;
        return ans;
    }
}

int main() {
    cin >> s >> t;
    memset(memo, -1, sizeof(memo));
    cout << ed(s.length(), t.length()) << "\n";
    return 0;
}
