#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {

    vector<char> ans(20, 0); // wtf is ascii value of 0, in char, 48 -> 0

    for (auto &x : ans) {
        cout << x << "|";
        x = '_';
    }
    cout << endl;

    for (auto &x : ans) {
        cout << x << "|";
        x = '_';
    }
    cout << endl;

    return 0;
}
