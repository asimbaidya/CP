#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;

        map<int, int> mp;
        int a, b;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (mp[b] == 0) {
                mp[b] = a;
            }
            if (mp[b] != 0 && mp[b] < a) {
                mp[b] = a;
            }
        }

        if (mp.size() == 10) {
            int sum = 0;
            for (auto p : mp) {
                sum += p.second;
            }
            cout << sum << "\n";
        } else {
            cout << "MOREPROBLEMS\n";
        }
    }
    return 0;
}
