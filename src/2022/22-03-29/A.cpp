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

        if (s.size() <= 3) {
            cout << "YES\n";
        } else {
            bool ya = true;
            for (int i = 3; i < s.size(); i++) {
                if (s[i - 3] == '1' && s[i - 2] == '1' && s[i - 1] == '0' &&
                    s[i] == '0') {
                    ya = false;
                }
            }

            if (ya) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
