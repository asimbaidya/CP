#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int n, k;
    cin >> n >> k;

    vector<string> vs(n);
    vector<vector<int>> v(n);

    for (auto &ti : vs) {
        cin >> ti;
    }

    // unnecessary  cuz using a bool array & for(auto ch:s){tmp[ch-'a']}
    for (int i = 0; i < n; i++) {
        vector<int> tmp(26, 0);
        for (auto ch : vs[i]) {
            tmp[ch - 97] = 1;
        }
        v[i] = tmp;
    }

    //
    int ans = 0;
    // pow(2,n) == (1 << n)
    for (int i = 1; i <= pow(2, n); i++) {
        vector<int> tmp(26);
        for (int j = 0; j < n; j++) {
            // except this part, almost same to editorial..
            if ((i & (1 << j))) {
                for (int l = 0; l < 26; l++) {
                    tmp[l] += v[j][l];
                }
            }
        }

        //
        int tmp_ans = 0;
        for (int l = 0; l < 26; l++) {
            if (tmp[l] == k) {
                tmp_ans++;
            }
        }
        ans = max(ans, tmp_ans);
        cout << ans << "\n";
    }
    cout << ans << "\n";

    return 0;
}
