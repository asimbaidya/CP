#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    long long int ans = 0;

    sort(all(v));

    for (int i = 0; i < n - 1; i++) {
        ans += abs(v[i].second - v[i + 1].second);
    }

    cout << ans << "\n";

    return 0;
}
