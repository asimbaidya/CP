#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        vector<int> v(4);
        cin >> n;
        for (auto &ti : v) {
            cin >> ti;
        }

        cout << *max_element(v.begin(), v.end()) << "\n";
    }

    return 0;
}
