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
        vector<int> a(n);
        for (auto &ti : a) {
            cin >> ti;
        }
        int m;
        cin >> m;
        vector<int> b(m);
        long long int sum = 0;
        for (auto &ti : b) {
            cin >> ti;
            sum += ti;
        }

        sum %= n;
        cout << a[sum] << "\n";
    }

    return 0;
}
