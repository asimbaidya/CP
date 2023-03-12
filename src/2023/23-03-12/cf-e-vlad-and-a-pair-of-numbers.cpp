#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    // // fast io
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int test;
    cin >> test >> ws;
    while (test--) {
        int x;
        cin >> x;

        if (x % 2) {
            cout << "-1\n";
        } else {
            int a = x + x / 2;
            int b = x / 2;

            if ((a + b) / 2 == (a ^ b)) {
                cout << a << " " << b << nl;
            } else {
                cout << "-1\n";
            }
        }
    }
    return 0;
}
