#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() { int test; cin >> test >> ws; while (test--) { int n; string s, t; cin >> n; cin >> s >> t; map<char, int> a, b; for (int i = 0; i < n; i++) { a[s[i]]++; b[t[i]]++; } vector<int> cnt_a(n, 0); if (s[0] == 'a') { cnt_a[0] = 1; } for (int i = 1; i < n; i++) { if (s[i] == 'a') { cnt_a[i] = cnt_a[i - 1] + 1; } else { cnt_a[i] = cnt_a[i - 1]; } } bool flag = true; int cnt = 0; for (int i = 0; i < n; i++) { if (t[i] == 'a') { cnt++; } if (cnt > cnt_a[i]) { flag = false; break; } } if (a == b && flag) { cout << "YES\n"; } else { cout << "No\n"; } } return 0; };
