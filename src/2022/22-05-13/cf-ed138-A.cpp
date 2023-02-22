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
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if (r1 < l2 || r2 < l1) {
            cout << min(r1, l1) + min(r2, l2) << "\n";
        } else {
            cout << max(min(r1, l1), min(r2, l2)) << "\n";
        }
    }

    return 0;
}
