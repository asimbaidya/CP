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
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;

        // missed case for 1
        if (a + b + c + d == 0) {
            cout << "0\n";
        } else if (a + b + c + d <= 3) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }

    return 0;
}
