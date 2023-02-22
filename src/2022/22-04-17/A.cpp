#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    scanf("%d", &test);
    while (test--) {
        int n, r, b;
        cin >> n >> r >> b;

        int dup = r / (b + 1);

        int i = 0;
        while (r > 0 || b > 0) {
            for (int j = 0; j < dup && r > 0; j++) {
                cout << "R";
                r--;
                i++;
            }
            if (b > 0) {
                cout << "B";
                b--;
                i++;
            }
        }
        cout << "\n";
    }
    return 0;
}
