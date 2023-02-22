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
        int size = n;
        for (auto &_t : v)
            cin >> _t;

        vector<string> ans;

        for (int i = 1; i < size; i++) {
            // finding positing of v[i]
            // assuming left is sorted
            int item = v[i];
            int k = i - 1;

            int d = 0;
            while (k >= 0 && v[k] > item) {
                d++;
                // when end,
                // v[k] < item
                // or k == 0
                // so item must go v[k+1]
                v[k + 1] = v[k];
                k--;
            }
            v[k + 1] = item;

            // cout << k + 2 << " " << i + 1 << " " << d << "\n";
            if (d != 0) {
                ans.push_back(to_string(k + 2) + " " + to_string(i + 1) + " " +
                              to_string(d));
            }
        }
        cout << ans.size() << "\n";
        for (auto x : ans) {
            cout << x << "\n";
        }
    }

    return 0;
}
