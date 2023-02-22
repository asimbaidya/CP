#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    long long a, b, k;
    cin >> a >> b >> k;
    // what si the issue?

    int ans = 0;
    while (a < b) {
        a *= k; // integer over-flow
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
