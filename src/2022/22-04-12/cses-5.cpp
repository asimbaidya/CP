#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    long long int ans = 2;

    for (int i = 1; i < n; i++) {
        // bug: wrap whole part  after  %
        ans = (ans * 2) % ((long long)1e9 + 7);
    }

    cout << ans << "\n";
    return 0;
}
