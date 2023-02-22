#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

map<long long int, long long int> fib;

long long int xn(long long int n) {
    if (fib[n] != 0)
        return fib[n];

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        long long int ans = xn(n - 1) + xn(n - 2);
        fib[n] = ans;
        return ans;
    }
}

int main(int argc, char *argv[]) {

    long long int ttt;
    scanf("%lld", &ttt);
    while (ttt--) {
        long long int n;
        cin >> n;
        cout << xn(n) << "\n";
    }

    return 0;
};
