#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {

        int m = 0;
        int p = 0;

        int n;
        cin >> n;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == 1)
                p++;
            else
                m++;
        }
        show(p);
        show(m);
    }
    return 0;
}
