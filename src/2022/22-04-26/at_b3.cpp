#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    string a, b;
    map<string, int> mp;
    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
        v[i] = make_pair(a, b);
    }

    bool flag = true;

    for (int i = 0; i < n; i++) {
        // hacked
        if (mp[v[i].first] == 2 && v[i].first == v[i].second) {
            continue;
        }
        if (!(mp[v[i].first] == 1 || mp[v[i].second] == 1)) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
