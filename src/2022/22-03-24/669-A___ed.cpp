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

        vector<char> s(n);
        int c_0 = 0;
        int c_1 = 0;
        for (auto &x : s) {
            cin >> x;
            if (x == '0')
                c_0++;
            else
                c_1++;
        }

        if (c_1 <= n / 2) {
            cout << n - c_1 << "\n";
            for (int i = 0; i < n - c_1; i++) {
                cout << 0 << " ";
            }
            cout << '\n';
        } else {

            int t = n - c_0;
            if (c_1 % 2 != 0)
                t--;

            cout << t << "\n";
            for (int i = 0; i < t; i++) {
                cout << 1 << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
