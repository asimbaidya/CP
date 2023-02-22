#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &_t : v)
        cin >> _t;

    int ans = 1;

    int mx = n - 1;

    for (int i = n - 2; i >= 0; i--) {
        if (i >= mx - v[i]) {
            ans++;
        }
        if (v[i] > mx)
            mx = i;
    }
    cout << ans << "\n";
    return 0;
}
