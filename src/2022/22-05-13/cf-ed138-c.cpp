#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        string s;
        cin >> s;
        int l = 0;
        int r = s.size() - 1;
        while (s.size() != 0 && s[l] == '0') {
            l++;
        }
        while (s.size() != 0 && s[r] == '0') {
            r--;
        }

        // show(l);
        // show(r);

        int z = 0;
        for (int i = l; i <= r; i++) {
            if (s[i] == '0') {
                z++;
            }
        }
        // show(z);

        vector<int> lv(s.size()), rv(s.size());

        int o = 0;
        int zt = z;
        int mx = max(z, o);
        for (int i = l; i <= r; i++) {
            if (s[i] == '1') {
                o++;
            }
            if (s[i] == '0') {
                zt--;
            }
            if (max(o, zt) < mx) {
                lv[i] = max(o, zt);
            } else {
                lv[i] = -1;
            }
        }

        zt = z;
        o = 0;
        mx = max(z, o);
        for (int i = r; i >= 0; i--) {
            if (s[i] == '1') {
                o++;
            }
            if (s[i] == '0') {
                zt--;
            }
            if (max(o, zt) < mx) {
                rv[i] = max(o, zt);
            } else {
                rv[i] = -1;
            }
        }
        // for (auto x : lv) {
        //     cout << x << " ";
        // }
        // cout << "\n";
        // for (auto x : rv) {
        //     cout << x << " ";
        // }
        // cout << "\n";

        int ans = z;
        for (int i = l; i < r; i++) {
            if (lv[i] != -1) {
                ans = min(ans, lv[i]);
            }
        }
        for (int i = l; i < r; i++) {
            if (rv[i] != -1) {
                ans = min(ans, rv[i]);
            }
        }
        cout << ans << "\n";
    };

    return 0;
}
