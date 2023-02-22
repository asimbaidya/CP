#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    long long int n;
    cin >> n;

    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }

        cout << n << " ";
    }

    cout << endl;
    return 0;
}
