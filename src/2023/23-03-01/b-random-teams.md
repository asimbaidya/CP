# explanation

[B. Random Teams](https://codeforces.com/contest/478/problem/B)

## todo

- [ ] again solve using graph theory

## my approach

Basically, when m = 1, all player will be in same team, so k_max == k_min, and the answer will be sum(1..n-1),
Else,
(Case1) 1 team will have maximum number of player & rest of the team will have 1 member(minimum constrain) and this will give k_max &
(Case2)now for k_min, we need to minimize number of player at each team as much as possible, so, we will equally divide player in each team if possible or n%m team will have one more than rest ... and then result in O(1) complexity, better than graph approach

```cpp
#include <bits/stdc++.h>
//#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
//#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

// function to calculate max pair in a team of size n(aka sum of n-1 element)
long long sum(long long x) {
    long long n = x - 1;
    return (n * (n + 1)) / 2;
}

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // input
    long long int n, m;
    cin >> n >> m;

    //
    if (m == 1) {
        // edge case, when m == 1
        cout << sum(n) << " " << sum(n) << "\n";
    } else {
        // max calculation
        long long int mx = sum(n - m + 1);

        long long int mn;

        // for halding case when n%m != 0 & n%m == 0
        long long int mx_member;
        long long int mn_member;

        if (n % m == 0) {
            mn_member = n / m;
            mx_member = 0;
        } else {
            mn_member = n / m;
            mx_member = mn_member + 1;
        }

        // if (n%m) team has 1 extra player,
        // then m-(n%m) team will have 1 less player, as m is maximum team size
        long long int mx_team = n % m;
        long long int mn_team = m - mx_team;
        // min calculation
        mn = mx_team * sum(mx_member) + mn_team * sum(mn_member);

        cout << mn << " " << mx << "\n";
    }

    return 0;
}
```
