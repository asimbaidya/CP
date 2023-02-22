#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int test;
    cin >> test >> ws;
    while (test--) {
        string s;
        cin >> s;

        map<char, int> mp;

        for (auto ch : s) {
            mp[ch]++;
        }

        for (auto m : mp) {
            if (m.second == 2)
                cout << m.first << m.first;
            else {
                cout << m.first;
            }
        }
        cout << "\n";
    }
    return 0;
};
