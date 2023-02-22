#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int n, x;
        cin >> n >> x;

        map<long long, long long> mp, ref;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            mp[a]++;
            ref[a]++;
        }

        int ans = 0;
        for (auto p : mp) {
            long long a = p.first;
            long long c = ref[a]; // bug1
            if (ref[a] != 0) {
                if (ref[a * x] != 0) {
                    ans += c - min(c, ref[a * x]);
                    ref[a * x] -= min(c, ref[a * x]);
                } else {
                    ans += c;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
