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
        vector<int> v(n);
        for (auto &x : v) {
            cin >> x;
        }

        string s(50, 'a');
        v.push_back(v[v.size() - 1] + 1);

        int u = 97;
        for (int i = 0; i <= n; i++) {
            if (u > 122) {
                u = 97;
            }
            s[v[i] - 1] = u;
            u++;
            cout << s << "\n";
        }
    }
    // code;
    return 0;
    4 4 1 2 4 2 2 5 3 3 1 3 1 3 0 0 0
}
