#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &_t : v) cin >> _t;

    int ans = n - 1;

    map<int, int> mp;

    for (int s = 0; s < n; s++) {
        int i = 0;

        for (; i < s; i++) {
            if (mp[v[i]]) break;
            mp[v[i]]++;
        }

        int j = n - 1;
        for (; j > i; j--) {
            if (mp[v[j]]) {
                j += 1;
                break;
            }
            mp[v[j]]++;
        }

        if (mp[v[j]] && i == j) j++;
        // show(j);
        ans = min(ans, j - i);

        mp.clear();  // don't forget
    }

    cout << ans << "\n";

    return 0;
}
