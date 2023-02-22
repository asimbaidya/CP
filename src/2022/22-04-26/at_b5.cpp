#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    string s;
    cin >> n >> s;

    int x = 0, y = 0;

    int dir[][2] = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') {
            c %= 4;
            x += dir[c][0];
            y += dir[c][1];
        } else {
            c++;
        }
    }
    cout << x << " " << y << "\n";
    return 0;
}
