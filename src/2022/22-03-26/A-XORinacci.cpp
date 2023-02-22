#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int a, b, n;
        cin >> a >> b >> n;

        if (n % 3 == 0) {
            cout << a << "\n";
        } else if (n % 3 == 1) {
            cout << b << "\n";
        } else {
            cout << (a ^ b) << "\n";
        }
    }

    return 0;
};
