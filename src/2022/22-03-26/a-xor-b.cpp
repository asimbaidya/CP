#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a >> b;

    show((a ^ b));
    show((b ^ a));

    show(((a ^ b) ^ a));
    show(((a ^ b) ^ b));

    show(((b ^ a) ^ a));
    show(((b ^ a) ^ b));

    show((((b ^ a) ^ a) ^ b));
    show((((b ^ a) ^ b) ^ a));

    return 0;
}
