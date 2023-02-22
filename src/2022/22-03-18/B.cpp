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
        // ouch, 1..3^(n-1) as starting from 1

        if (n >= 20) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            int start = 1;
            for (int i = 1; i <= n; i++) {
                cout << start << " ";
                start *= 3;
            }
            cout << "\n";
        }
    }
    // code;
    return 0;
}
