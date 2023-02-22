#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    a %= 998244353;
    b %= 998244353;
    c %= 998244353;
    d %= 998244353;
    e %= 998244353;
    f %= 998244353;

    long long int ans;
    ans = (a * b) % 998244353;
    ans = (ans * c) % 998244353;

    long long int fo;
    fo = (d * e) % 998244353;
    fo = (fo * f) % 998244353;

    // why adding ?
    // to handle negative cases ?
    show(a);
    show(b);
    show(c);
    show(d);
    show(e);
    show(f);
    show(fo);
    show(ans);

    // correct
    cout << (ans + 998244353ll * 10ll - fo) % 998244353 << "\n";

    // to understand the problem with below line,
    // use this input
    // 9982443531 998244354 998244354 998244354 998244354 998244423
    cout << (ans - fo) % 998244353 << "\n";

    return 0;
}
