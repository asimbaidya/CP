#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(m);

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[i] = make_pair(x, i);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        b[i] = make_pair(x, i);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n >= m) {
        for (int i = 0; i < n; i++) {
            cout << a[i].second << " " << b[0].second << "\n";
        }
        for (int i = 1; i < m; i++) {
            cout << a[n - 1].second << " " << b[i].second << "\n";
        }
    } else {
        for (int i = 0; i < m; i++) {
            cout << a[0].second << " " << b[i].second << "\n";
        }
        for (int i = 1; i < n; i++) {
            cout << a[i].second << " " << b[m - 1].second << "\n";
        }
    }

    return 0;
}
