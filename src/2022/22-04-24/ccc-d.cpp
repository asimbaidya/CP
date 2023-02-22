#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &ti : v) {
            cin >> ti;
        }

        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                int tmp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = tmp;
                ;
                break;
            }
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
