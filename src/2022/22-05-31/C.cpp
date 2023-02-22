#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // let's ------ optimize
        for (int i = 0; i < k; i++) {
            bool flag = false;
            int ice_cream = 0;
            int tmp = 0;
            for (int j = n - 1; j > 0 && j >= ice_cream; j--) {
                if (s[j] == '0' and s[j - 1] == '1') {
                    s[j] = '1';
                    s[j - 1] = '0';
                    flag = true;
                }
                if (s[j] == '1') tmp = j;
                if (s[j - 1] == '1') tmp = j;
            }
            ice_cream = tmp;
            if (flag == false) {
                break;
            }
        }

        long long ans = 0;
        for (int i = 0; i <= n - 2; i++) {
            ans += ((s[i] - 48) * 10) + s[i + 1] - 48;
        }
        cout << ans << "\n";
    }

    return 0;
}
