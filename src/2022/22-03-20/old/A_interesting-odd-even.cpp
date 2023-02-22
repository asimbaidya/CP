#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    long long int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << "\n";
    } else {
        cout << n / 2 - n << "\n";
    }

    return 0;
}
