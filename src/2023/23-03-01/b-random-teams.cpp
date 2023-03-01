#include <bits/stdc++.h>
//#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
//#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

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
        cout << sum(n) << " " << sum(n) << "\n";
    } else {
        long long int mx = sum(n - m + 1);
        long long int mn;

        long long int mx_member;
        long long int mn_member;

        if (n % m == 0) {
            mn_member = n / m;
            mx_member = 0;
        } else {
            mn_member = n / m;
            mx_member = mn_member + 1;
        }

        long long int mx_team = n % m;
        long long int mn_team = m - mx_team;
        mn = mx_team * sum(mx_member) + mn_team * sum(mn_member);

        cout << mn << " " << mx << "\n";
    }

    return 0;
}
