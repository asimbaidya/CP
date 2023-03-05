// https://codeforces.com/problemset/problem/1328/B
// TLE, but good simulation :)

#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    // FIO but do not use printf/scanf
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int test;
    cin >> test >> ws;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<char> v(n, 'a');

        int i = n - 2;
        int j = n - 1;
        v[i] = 'b';
        v[j] = 'b';

        //  fucking edge case
        char t;
        while (--k) {
            if (i == n - 2 && j == n - 1) {
                t = v[i];
                v[i] = v[i - 1];
                v[i - 1] = t;
                i--;
            } else if (j - 1 == i) {
                t = v[i];
                v[i] = v[i - 1];
                v[i - 1] = t;
                i--;

                t = v[j];
                v[j] = v[n - 1];
                v[n - 1] = t;
                j = n - 1;
            } else {
                t = v[j];
                v[j] = v[j - 1];
                v[j - 1] = t;
                j--;
            }
        }
        for (auto x : v) {
            cout << x;
        }
        cout << nl;
    }

    return 0;
}
