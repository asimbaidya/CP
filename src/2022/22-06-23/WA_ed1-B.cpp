#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

char cnt[10001];

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int l, r, k;
        cin >> l >> r >> k;

        // min cyclic shift to get position of k'th cyclic shift
        if (r == l) {
            continue;
        }
        int shamt = k % (r - l);
        int sz = r - l;

        // storing in fringe
        for (int i = 0, j = l - 1; i <= sz; i++, j++) {
            cnt[i] = s[j];
        }

        // shift
        for (int i = 0; i < shamt; i++) {
            char top = cnt[sz];
            for (int j = sz; j > 0; j--) {
                cnt[j] = cnt[j - 1];
            }
            cnt[0] = top;
        }

        for (int i = 0, j = l - 1; i <= sz; i++, j++) {
            s[j] = cnt[i];
        }
        cout << s << "\n";
    }
    cout << s << "\n";

    return 0;
}
