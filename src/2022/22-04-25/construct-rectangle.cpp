#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        vector<int> v(3);
        for (auto &ti : v) {
            cin >> ti;
        }

        sort(v.begin(), v.end());
        bool flag = false;

        if (v[2] == v[1] + v[0]) {
            flag = true;
        }
        if (v[1] == v[0] && v[2] % 2 == 0) {
            flag = true;
        }
        if (v[1] == v[2] && v[0] % 2 == 0) {
            flag = true;
        }
        if (v[0] == v[2] && v[1] % 2 == 0) {
            flag = true;
        }

        if (flag) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
    return 0;
}
