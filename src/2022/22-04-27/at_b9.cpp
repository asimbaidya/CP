#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &ti : v) {
        cin >> ti;
    }

    int ans = 0;
    vector<bool> vis(n);
    for (int i = 0; i < n; i++) {
        if (vis[i] == 1) {
            continue;
        }
        ans++;
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                vis[j] = true;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
