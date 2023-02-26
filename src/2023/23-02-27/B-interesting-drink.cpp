#include <bits/stdc++.h>
using namespace std;

// TIME: 7min
// learned: forgotten(forbidden) upper_bound & lower_bound

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &ti : v) {
        cin >> ti;
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--) {
        int i;
        cin >> i;

        vector<int>::iterator it = upper_bound(v.begin(), v.end(), i);
        int size = it - v.begin();
        cout << size << "\n";
    }

    return 0;
}
