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

        vector<int> ch(26, 0);

        for (auto x : s) {
            ch[x - 'a']++;
        }

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                i++;
                cout << "matched\n";
            }
        }
    }
    // code;
    return 0;
}
