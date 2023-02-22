#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    string s;
    cin >> s;

    int ans = 0;
    int cnt = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == s[i]) {
            cnt++;
        } else {
            if (cnt > ans)
                ans = cnt;
            cnt = 1;
        }
        // show(cnt);
    }

    // bug:1
    if (cnt > ans) {
        ans = cnt;
    }

    cout << ans << "\n";
    return 0;
}
