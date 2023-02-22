#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        long long int s, n;
        cin >> n >> s;

        long long int sq = n * n;

        if (s == 0) {
            cout << 0 << "\n";
        } else {
            cout << s / sq << "\n";
        }
    }
    return 0;
};
