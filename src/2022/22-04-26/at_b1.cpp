#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    string s;
    cin >> s;
    bool up = false;
    bool lo = false;

    // pair-wise distinct => unique
    set<char> st{s.begin(), s.end()}; // string to set
    bool distinct = s.size() == st.size();

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90)
            up = true;
        if (s[i] >= 97 && s[i] <= 122)
            lo = true;
    }

    if (up && lo && distinct) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
