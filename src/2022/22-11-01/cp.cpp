#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    int i = 0;
    int ans;
    int mx = -1;
    for (auto &ti : v) {
        i++;
        cin >> ti;
        if (ti > mx) {
            mx = ti;
            ans = i;
        }
    }

    cout << ans << "\n";

    return 0;
}
