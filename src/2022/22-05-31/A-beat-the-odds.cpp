// note: with odd & even in a sequence, it is always a pair with sum ending odd.
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
        cin >> n;
        vector<int> v(n);

        int even = 0, odd = 0;
        for (auto &ti : v) {
            cin >> ti;
            if (ti % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        cout << min(odd, even) << "\n";
    }

    return 0;
}
