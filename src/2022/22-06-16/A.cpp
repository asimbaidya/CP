#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() { int test; cin >> test >> ws; while (test--) { int a, b; cin >> a >> b; string s = ""; int m = abs(a - b); int i; while (a || b) { i = max(0, m - 1); while (i >= 0 && a) { s += '0'; a--; i--; } i = max(0, m - 1); while (i >= 0 && b) { s += '1'; b--; i--; } } cout << s << "\n"; } return 0; }
