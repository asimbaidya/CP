#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        double a, b;
        cin >> a >> b;

        if (a * 10 == b * 5) {
            cout << "ANY\n";
        } else if (a * 10 < b * 5) {
            cout << "SECOND\n";
        } else {
            cout << "FIRST\n";
        }
    }
    return 0;
}
