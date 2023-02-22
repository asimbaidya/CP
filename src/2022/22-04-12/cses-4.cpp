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

    long long ans = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << ans << "\n";
    return 0;
}
