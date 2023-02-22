#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &ti : a) {
        cin >> ti;
    }
    for (auto &ti : b) {
        cin >> ti;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        cout << it - a.begin() << " ";
    }
    cout << "\n";
    return 0;
}
