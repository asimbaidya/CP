#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        int n, h;
        cin >> n >> h;

        vector<int> v(n);
        for (auto &_tmp : v)
            cin >> _tmp;

        sort(v.begin(), v.end());

        int m1 = v[v.size() - 1];
        int m2 = v[v.size() - 2];

        int count = ceil((double)h / (m1 + m2));

        h -= count * (m1 + m2); // forgot
        count *= 2;             // m1+m2, 2 turn

        if (h + m2 <= 0) // if m1 was unnecessary
            count--;
        cout << count << "\n";
    }
    return 0;
}
