#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    scanf("%d", &test);
    while (test--) {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for (auto &ti : v) {
            cin >> ti;
        }

        sort(v.begin(), v.end());

        bool can_buy = true;
        int ans = 0;
        int up = 0; // price-hike-balance

        while (can_buy) {
            int c = 0;
            int prev = 0;
            for (int i = 0; i < n; i++) {
                // show(prev + v[i] + up);
                if (prev + v[i] + up <= x) {
                    c++;
                    prev += v[i] + up;
                } else {
                    break;
                }
            }
            if (c == 0) {
                can_buy = false;
            }
            ans += c;
            up++;
        }
        cout << ans << "\n";
    }
    return 0;
}
