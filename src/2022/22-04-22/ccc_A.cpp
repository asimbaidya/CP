#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    scanf("%d", &test);
    while (test--) {
        int a, b;
        cin >> a >> b;
        cout << min(a * 3, b * 2) << "\n";
    }
    return 0;
}
