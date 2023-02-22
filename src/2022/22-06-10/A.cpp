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
        int p, q, k;
        cin >> p >> q >> k;
        string a, b;
        cin >> a >> b;
        string s = "";
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        stack<char> sa;
        stack<char> sb;
        for (int i = p - 1; i >= 0; i--) {
            sa.push(a[i]);
        }
        for (int i = q - 1; i >= 0; i--) {
            sb.push(b[i]);
        }
        while (!sa.empty() && !sb.empty()) {
            if (k != 1) {
                int x = p;
                int y = q;
                for (int i = 0; i < k; i++) {
                    if (sa.top() < sb.top()) {
                        s += sa.top();
                        sa.pop();
                        p--;
                    } else {
                        s += sb.top();
                        sb.pop();
                        q--;
                    }
                    if (sa.empty() | sb.empty()) {
                        break;
                    }
                }
                if (sa.empty() | sb.empty()) {
                    break;
                }
                if (x == p) {
                    s += sa.top();
                    sa.pop();
                    p--;
                }
                if (y == q) {
                    s += sb.top();
                    sb.pop();
                    q--;
                }
            } else {
                if (sa.top() < sb.top()) {
                    while (!sa.empty() && !sb.empty()) {
                        s += sa.top();
                        sa.pop();
                        p--;
                        if (sa.empty() | sb.empty()) {
                            break;
                        }
                        s += sb.top();
                        sb.pop();
                        q--;
                    }
                } else {
                    while (!sa.empty() && !sb.empty()) {
                        s += sb.top();
                        sb.pop();
                        q--;
                        if (sa.empty() | sb.empty()) {
                            break;
                        }
                        s += sa.top();
                        sa.pop();
                        p--;
                    }
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
