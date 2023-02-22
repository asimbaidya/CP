#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;

        if (n % 7 == 0) {
            cout << n << "\n";
        } else {
            int l = n / 7;
            int a = l * 7;
            int b = (l + 1) * 7;
            if ((n / 10) % 10 == (a / 10) % 10) {
                cout << a << "\n";
            } else {
                cout << b << "\n";
            }
        }
    }
    return 0;
}
