#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    scanf("%d", &test);
    while (test--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (auto &ti : v) {
            cin >> ti;
        }

        map<int, int> mp;
        mp[1] = 0;
        mp[2] = 0;
        mp[3] = 0;
        mp[4] = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] == 1) {
                mp[1]++;
            } else if (v[i] - v[i - 1] == 2) {
                mp[2]++;
            } else if (v[i] - v[i - 1] == 3) {
                mp[3]++;
            } else {
                mp[4]++;
            }
        }

        // show(mp[1]);
        // show(mp[2]);
        // show(mp[3]);

        if (mp[4] != 0) {
            cout << "NO\n";
        } else if (mp[3] != 0 && n > 3) {
            cout << "NO\n";
        } else if (mp[3] == 1 && n <= 3) {
            cout << "YES\n";
        } else {
            if (mp[2] == 1 || mp[2] == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
