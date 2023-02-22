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
        int a;
        cin >> a;

        a -= 3;

        int l3 = a / 3;
        int l2 = a / 3 + 1;
        int l1 = a / 3 + 2;

        if (a % 3 == 2) {
            l2 += 1;
            l1 += 1;
        } else if (a % 3 == 1) {
            // bug1: else if(a%3 == 1)
            l1 += 1;
        }

        cout << l2 << " " << l1 << " " << l3 << "\n";
    }

    return 0;
};
