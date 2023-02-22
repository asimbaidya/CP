#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    map<int, int> mp;

    for (auto &ti : a) {
        cin >> ti;
        mp[ti] += 1;
    }

    for (auto &ti : b) {
        cin >> ti;
    }

    bool flag = true;
    for (auto ti : b) {
        if (mp[ti] == 0) {
            flag = false;
            break;
        }
        mp[ti]--;
    }

    if (flag) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
