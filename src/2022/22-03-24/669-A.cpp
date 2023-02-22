#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int n;
        cin >> n;
        vector<char> s(n);
        for (auto &x : s)
            cin >> x;

        vector<bool> ans(n, 0);

        int nz = 0;
        for (int i = 0; i < n; i += 2) {
            if (s[i] - s[i + 1] != 0) {
                nz++;
                ans[i] = 1;
            }
        }

        cout << max(n - 2 * nz, n / 2) << "\n";
        for (int i = 0; i < n; i += 2) {
            if (ans[i]) {
                if (2 * nz > n / 2)
                    cout << "0 ";
            } else {
                cout << s[i] << " " << s[i + 1] << " ";
            }
        }
        cout << "\n";
    }
    // code;
    return 0;
}
