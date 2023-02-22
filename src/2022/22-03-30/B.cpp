#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int n;
        cin >> n;

        vector<int> v(n);

        long long int sum = 0;
        for (auto &_t : v) {
            cin >> _t;
            sum += _t;
        }

        sort(v.begin(), v.end());

        vector<long long int> l(n);
        vector<long long int> r(n);

        l[0] = v[0];
        for (int i = 1; i < n; i++) {
            l[i] = l[i - 1] + v[i];
        }

        r[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            r[i] = r[i + 1] + v[i];
        }

        // for (auto x : l) {
        //     cout << x << " ";
        // }
        // cout << "\n";
        // for (auto x : r) {
        //     cout << x << " ";
        // }
        // cout << "\n";

        int i = 1;
        int j = n - 1;
        bool ya = false;

        while (i < j) {
            if (l[i] < r[j]) {
                ya = true;
                break;
            }
            i++, j--;
        }

        if (ya) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
