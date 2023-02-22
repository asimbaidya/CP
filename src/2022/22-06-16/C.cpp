#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() { int test; cin >> test >> ws; while (test--) { int n; cin >> n; vector<int> v(n); for (auto &ti : v) { cin >> ti; } int end = n - 1; while (true && end >= 0) { if (v[end] == 0) end--; else break; } int sum = 0; bool flag = true; for (int i = end; i > 0; i--) { sum += v[i]; if (sum > 0 || sum == 0) { flag = false; break; } } sum += v[0]; if (flag && sum == 0) { cout << "Yes\n"; } else { cout << "No\n"; } } return 0; }
