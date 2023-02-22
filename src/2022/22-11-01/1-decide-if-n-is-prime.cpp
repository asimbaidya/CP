#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

bool filter_primes(long long int n) {
    if (n < 2) {
        return false;
    }

    // with i=2, this block is not necessary
    if (n <= 3) {
        return true;
    }

    // starts from 2: 1229 (correct)
    // starts from 3: 1899 (wrong) - 18 is not prime :)
    // starts from 4: 2371 (wrong) - 18 is prime :(
    //
    // 2*2 -> 4
    // 3*3 -> 9
    // 4*4 -> 16
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // FIO but do not use printf/scanf
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int test;
    cin >> test >> ws;
    while (test--) {
        long long int n;
        cin >> n;
        cout << "n: " << n << "-> " << filter_primes(n) << "\n";
    }

    return 0;
}
