// https://codeforces.com/problemset/problem/158/B
// what is CP for ?
#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // bruitforce
    // O(1)

    int n;
    cin >> n;

    map<int, int> mp;
    while (n--) {
        int x;
        cin >> x;
        mp[x]++;
    }

    // 4 member groupt need  one taxi
    int ans = mp[4];

    int one = mp[1];
    int two = mp[2];
    int three = mp[3];

    ans += two / 2;  // 2 member group can share
    two %= 2;        // two == 0 or 1 now
    // if two == 1
    if (two == 1) {
        ans += 1;
        // take at most 2 group of one
        if (one >= 2) {
            one -= 2;
        } else if (one >= 1) {
            one--;
        }
    }

    // now lets handle the case for 3 & 1
    ans += three;

    // now, three member group can take one member
    // **NOTE** : missed edge  cases
    if (one > three) {
        one -= three;
    } else {
        one = 0;
    }

    // now only one group left,  let pack them in one taxi :)
    ans += ceil((float)one / 4.0);

    // shold work: worked after 3 modification :)
    cout << ans << "\n";
    return 0;
}
