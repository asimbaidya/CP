#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        string s;
        cin >> s;

        bool flag_r = false;
        bool flag_g = false;
        bool flag_b = false;
        bool flag = true;
        for (auto ch : s) {
            if (ch == 'r')
                flag_r = true;
            if (ch == 'g')
                flag_g = true;
            if (ch == 'b')
                flag_b = true;
            if (ch == 'R' && !flag_r) {
                flag = false;
                break;
            }
            if (ch == 'G' && !flag_g) {
                flag = false;
                break;
            }
            if (ch == 'B' && !flag_b) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
