#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

// 37 MIN
// I was thinking in right track thogh it was dump
// maybe
int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int a;
        cin >> a;

        vector<int> v(a);

        if (a % 2 == 0) {
            for (int i = 0; i < a - 2; i++) {
                v[i] = a - 2 - i;
            }
        } else {
            for (int i = 1; i < a - 2; i++) {
                v[i] = a - 2 - i + 1;
            }

            v[0] = 1;
        }
        v[a - 1] = a;
        v[a - 2] = a - 1;

        for (auto x : v) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
