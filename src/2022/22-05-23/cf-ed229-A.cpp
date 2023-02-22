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
        int m, n;
        cin >> n;

        vector<int> a(n);

        for (auto &ti : a) {
            cin >> ti;
        }
        cin >> m;

        vector<int> b(m);
        for (auto &ti : b) {
            cin >> ti;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int sart = 0;
        int i = 0, j = 0;

        while (true) {
            if (i >= a.size()) {
                cout << "Bob\n";
                break;
            }
        }
    }

    return 0;
}
