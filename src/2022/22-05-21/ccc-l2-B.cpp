#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    vector<int> v(4);
    for (auto &ti : v) {
        cin >> ti;
    }

    int ans = 0;
    for (auto x : v) {
        if (x >= 10) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
