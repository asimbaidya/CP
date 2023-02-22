#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &x : v)
        cin >> x;

    map<int, bool> mp;

    int i = 0;
    // getting prefix
    while (i < n && mp[v[i]] == false) {
        mp[v[i]] = true;
        i++;
    }

    // getting suffix
    int j = n - 1;
    while (j > i && mp[v[j]] == false) {
        mp[v[j]] = true;
        j--;
    }
    // cout << i << " " << j << "\n";
    if (i > j) {
        cout << 0 << "\n";
    } else {
        cout << j + 1 - i << '\n';
    }

    return 0;
}
