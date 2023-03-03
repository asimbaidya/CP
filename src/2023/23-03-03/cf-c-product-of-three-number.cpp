// https://codeforces.com/contest/1294/problem/C
// AC on Day 2

#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int main() {
    // shit
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;
        int p = n;  // making a copy for shit test

        bool flag = false;
        int a = -1, b;
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                a = i;
                p = p / i;
                break;
            }
        }
        for (int i = 2; i * i <= p; i++) {
            // not required, but, shit out of all warnings
            if (a == -1) {
                break;
            }
            if (p % i == 0 && i != a) {
                b = i;
                p = p / i;
                flag = true;
                break;
            }
        }

        // shit shit shit

        if (flag == false || n / (a * b) == 1 || n / (a * b) == a ||
            n / (a * b) == b) {
            cout << "NO\n";
        } else {
            cout << "Yes\n";
            cout << a << " " << b << " " << n / (a * b) << "\n";
        }
    }
}
