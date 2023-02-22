#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    cin >> n;
    // try n = -24
    cout << (long long)floor((long double)n / 10) << "\n";
    cout << floor((long double)n / 10) << "\n";
    cout << (long long)floor(n / 10) << "\n";
    return 0;
}
