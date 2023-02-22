#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        string s;
        char c;
        cin >> s >> c;

        string ans = "NO";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c && i % 2 == 0) {
                ans = "YES";
                break;
            }
        }
        cout << ans << "\n";
    }
    // code;
    return 0;
}
