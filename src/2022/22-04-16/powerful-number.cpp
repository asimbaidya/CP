#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

long long fact(long long n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int main(int argc, char *argv[]) {

    vector<long long> v;
    map<long long, int> mp;

    for (int i = 0; i <= 40; i++) {
        long long j = (long long)pow(2, i);
        v.push_back(j);
        mp[j] = 1;
    }

    for (int i = 0; i <= 15; i++) {
        long long j = fact(i);
        if (!mp[j]) {
            v.push_back(j);
        }
    }

    sort(v.begin(), v.end());

    int test;
    scanf("%d", &test);
    while (test--) {
        long long n;
        cin >> n;

        int ans = INT_MAX;

        int len = v.size();

        for (int i = len - 1; i >= 0; i--) {
            long long m = n;
            int t = 0;
            for (int j = i; j >= 0; j--) {
                if (v[j] <= m) {
                    m -= v[j];
                    t++;
                }
            }
            if (m == 0) {
                ans = min(ans, t);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
