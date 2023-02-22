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

        bool five = false;
        bool zero = false;

        // -_-
        // brutforce extremee
        int ans = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != '0' && s[i] != '5' && s[i] != '2' && s[i] != '7') {
                ans++;
            } else {
                char k = s[i];

                if (five && (k == '7' || k == '2')) {
                    if (zero) {
                        ans++;
                    }
                    break;
                }
                if (zero && (k == '0' || k == '5')) {
                    if (five) {
                        ans++;
                    }
                    break;
                }
                if (k == '5') {
                    if (five) {
                        ans++;
                    }
                    five = true;
                    continue;
                }
                if (k == '0') {
                    if (zero) {
                        ans++;
                    }
                    zero = true;
                    continue;
                }
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
