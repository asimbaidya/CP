#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {

        // usch a operation will always decrease the number

        string s;
        cin >> s;

        bool ya = false;
        for (int i = s.size() - 2; i >= 0; i--) {
            int res = s[i] + s[i + 1] - 2 * '0';
            if (res >= 10) {
                s[i] = res / 10 + '0';
                s[i + 1] = res % 10 + '0';
                ya = true;
                break;
            }

            if (i == 0) {
                s[i + 1] = res + '0';
                s.erase(0, 1);
            }
        }

        cout << s << "\n";
    }
    return 0;
}
