#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int k, n;
        cin >> n >> k;

        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        sort(v.begin(), v.end());

        int i = 0;
        int j = 1;
        bool ya = false;
        while (i < n && j < n) {
            if (v[i] + k == v[j]) {
                ya = true;
                break;
            }
            // i+k < small, so i need to increase
            if (v[i] + k < v[j]) {
                i++;
            } else {
                j++;
            }
        }

        if (ya) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    // code;
    return 0;
}
