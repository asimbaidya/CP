// https://codeforces.com/problemset/problem/1328/B

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

        // lets find the index of right `b`
        int a = -1;
        int b = -1;
        // complexity O(n-1)
        // => O(n)

        for (int i = 1; i < n; i++) {
            // conversion matters
            // long long int s = i * (i + 1) / 2; // error
            long long int s = (long long)i * ((long long)i + 1) / 2;
            if (k <= s) {
                a = i;
                b = s - k;
                break;
            }
        }

        // got a which indicate the position of left most b
        // now need the position of right most  b
        // also b distance between second and first b? yes
        // show(a);
        // show(b);

        v[n - 1 - a] = 'b';          // forst right most b
        v[n - 1 - a + b + 1] = 'b';  // for left most b
        // look at this to make sense
        /*
        aaabb
        aabab
        aabba
        abaab
        ababa
        abbaa
        baaab
        baaba
        babaa
        bbaaa
        */

        for (auto x : v) {
            cout << x;
        }
        cout << nl;
    }

    return 0;
}
