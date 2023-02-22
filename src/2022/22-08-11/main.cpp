#include <bits/stdc++.h>

#include <vector>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    vector<int> v(10);

    for (auto &x : v) {
        cin >> x;
    }

    for (auto x : v) {
        cout << x << "\n";
    }

    return 0;
}
