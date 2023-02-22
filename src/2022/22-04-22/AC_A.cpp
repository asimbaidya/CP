#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test = 10;
    scanf("%d", &test);
    while (test--) {
        string s;
        cin >> s;

        char c = s[0];
        int count = 1;

        bool yes = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != c) {
                if (count == 1) {
                    yes = false;
                    break;
                }
                c = s[i];
                count = 0;
            }
            count++;
            // show(count);
        }

        if (count == 1) {
            yes = false;
        }
        if (s.size() == 1) {
            yes = false;
        }
        if (yes) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
