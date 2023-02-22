#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

void solve(int n) {
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    cout << n << " ";

    if (n % 2 == 0) {
        solve(n / 2);
    } else {
        solve(n * 3 + 1);
    }
}

int main() {
    int n;
    cin >> n;

    solve(n);

    return 0;
}
