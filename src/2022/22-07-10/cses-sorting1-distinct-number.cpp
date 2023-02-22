#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> st;

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        st.insert(x);
    }

    cout << st.size() << "\n";

    return 0;
}
