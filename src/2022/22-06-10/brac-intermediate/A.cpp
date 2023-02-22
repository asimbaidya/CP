#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

// TLE skip calc
int n = 18000;
int k = 0;
int l = 0;

vector<bool> sev(n, true);
vector<int> primes(2300);
vector<int> st(3000000);

void seive() {
    sev[0] = false;
    sev[1] = false;

    for (int i = 2; i * i <= n; i++) {
        for (int j = 2; i * j <= n; j++) {
            sev[i * j] = false;
        }
    }

    for (int i = 1; i < n; i++) {
        if (sev[i]) {
            primes[k] = i;
            k++;
        }
    }
}

void construct() {
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (i != j) {
                st[l] = primes[i] * primes[j];
                l++;
            }
        }
    }
}

int main() {
    seive();
    construct();

    sort(st.begin(), st.begin() + l);

    int test;
    cin >> test >> ws;
    while (test--) {
        int k;
        cin >> k;
        cout << st[k - 1] << "\n";
    }

    return 0;
}
