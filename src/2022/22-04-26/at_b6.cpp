#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    map<int, int> ma;
    map<int, int> mb;
    for (auto &ti : a) {
        cin >> ti;
        // ma[ti]++; // one map required
    }

    for (auto &ti : b) {
        cin >> ti;
        mb[ti]++;
    }

    int same_index = 0;
    int dif_index = 0;
    for (int i = 0; i < n; i++) {
        if (mb[a[i]]) {
            if (a[i] == b[i]) {
                same_index++;
            } else {
                dif_index++;
            }
        }
    }

    cout << same_index << " " << dif_index << "\n";

    return 0;
};
