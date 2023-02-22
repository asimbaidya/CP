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
        int n, m;
        cin >> n;

        vector<int> a(n);

        int i = 0;
        int j = 0;

        for (auto &ti : a) {
            cin >> ti;
            i = max(i, ti);
        }
        cin >> m;
        vector<int> b(m);
        for (auto &ti : b) {
            cin >> ti;
            j = max(j, ti);
        }

        if (i == j) {
            cout << "Alice\nBob\n";
        } else if (i > j) {
            cout << "Alice\nAlice\n";
        } else {
            cout << "Bob\nBob\n";
        }
    }

    return 0;
}
