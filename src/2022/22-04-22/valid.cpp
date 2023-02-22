#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

// lean to use backtrack
bool valid(int n) {
    for (int i = 0; i <= 25; i++) {
        for (int j = 0; j <= 25; j++) {
            if (2 * i + 3 * j == n) {
                return true;
            }
        }
    }
    return false;
}
int main(int argc, char *argv[]) {

    int test;
    scanf("%d", &test);
    while (test--) {
        for (int i = 0; i <= 50; i++) {
            if (valid(i)) {
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
