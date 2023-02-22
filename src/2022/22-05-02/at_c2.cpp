#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

#define nl "\n"

bool is_palindrome(string s, int i, int e) {
    for (; i < e; i++, e--) {
        if (s[i] != s[e]) {
            return false;
        }
    }

    return true;
}
int main() {
    string s;
    cin >> s;

    // remove a from back
    // count how many a removed from back
    int j = 0;
    int e = s.size() - 1;
    while (e > 0 && s[e] == 'a') {
        e--;
        j++;
    }

    int i = 0;

    // remove a from front, only if there  is a in back
    while (i < s.size() && s[i] == 'a' && j > 0) {
        i++;
        j--;
    }

    if (is_palindrome(s, i, e)) {
        cout << "Yes" << nl;

    } else {
        cout << "No\n";
    }

    return 0;
}
