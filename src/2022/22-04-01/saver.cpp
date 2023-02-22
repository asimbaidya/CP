#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        string s;
        cin >> s;

        bool ya = false;
        for (int i = 0; i < s.size() - 1; i++) {
            int n = s[i] - '0' + s[i + 1] - '0';
            int m = 10 * s[i] - '0' + s[i + 1] - '0';
            if (n > m) {
                cout << "H\n";
                ya = true;
                s[i] = n / 10;
                s[i + 1] = n % 10;
                break;
            }
        }

        if (!ya) {
            cout << "HI\n";
            int i = s.size() - 2;
            int n = s[i] - '0' + s[i + 1] - '0';
            s[i] = n / 10;
            s[i + 1] = n % 10;
        }
        cout << s << "\n";
    }
    return 0;
}
