#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define out(x) cout << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(m, 0);

    int t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        v[t - 1]++;
    }

    long long int ans = 0;

    for (int i = 0; i < m; i++) {
        // cout << "v[" << i + 1 << "] :" << v[i] << "\n";
        for (int j = i + 1; j < m; j++) {
            ans += v[i] * v[j];
        }
    }

    out(ans);

    return 0;
}
