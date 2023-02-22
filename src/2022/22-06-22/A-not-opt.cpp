// AC
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
        int k;
        cin >> k;

        for (int i = 1; i <= 100; i++) {
            double cmp = (double)((double)i / 100) * k;
            if (cmp == (int)cmp) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
