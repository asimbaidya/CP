#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int t1, v1, c1, t2, v2, c2, x;
    cin >> t1 >> v1 >> c1 >> t2 >> v2 >> c2 >> x;

    int takashi = (x / (t1 + c1)) * t1 * v1;
    takashi += min(t1, (x % (t1 + c1))) * v1;

    int aoki = (x / (t2 + c2)) * t2 * v2;
    aoki += min(t2, (x % (t2 + c2))) * v2;

    // show(takashi);
    // show(aoki);
    if (takashi > aoki) {
        cout << "Takahashi\n";
    } else if (takashi < aoki) {
        cout << "Aoki\n";
    } else {
        cout << "Draw\n";
    }

    return 0;
}
