#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int n;
        cin >> n;

        if (!(n <= 30)) {
            cout << "YES\n";
            if (n - 30 == 6 || n - 30 == 10 || n - 30 == 14) {
                cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << "\n";
            } else {
                cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << "\n";
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
