#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;
        string v;
        cin >> v;

        int ans = 0;

        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (v[i] != v[j]) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
