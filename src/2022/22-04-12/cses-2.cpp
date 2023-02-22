#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    int ans = 0;
    int a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        ans ^= a;
        ans ^= i;
    }

    ans ^= n;

    cout << ans << "\n";

    return 0;
}
