// YES: AC ON 4th attmpt!
#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &ti : v) {
        cin >> ti;
    }

    //
    int l = -1;
    int r = -1;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            l = i;
            break;  // caused bug
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (v[i] < v[i - 1]) {
            r = i;
            break;  // caused bug
        }
    }

    // cout << l << "\n";
    // cout << r << "\n";
    // how handle difference cases
    if (l == -1 && r == -1) {
        cout << "yes\n";
        cout << "1 1\n";
    } else if (l >= r) {
        cout << "yes\n";
        cout << "1 " << n << "\n";
    } else {
        int a, b;
        a = l;
        b = r;
        while (l < r) {
            int tmp = v[l];
            v[l] = v[r];
            v[r] = tmp;
            l++;
            r--;
        }

        bool flag = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "yes\n";
            cout << a + 1 << " " << b + 1 << "\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
