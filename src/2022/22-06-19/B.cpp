#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        string s;
        cin >> s;

        int one = 0;
        int zero = 0;

        for (auto ch : s) {
            if (ch == '0') {
                zero++;
            } else {
                one++;
            }
        }

        if (one == zero) {
            cout << one - 1 << "\n";
        } else {
            // this part contain bug!! no
            // so basically if number of zero and number of 1 is equal, then
            // just exclude first or last element from the string this will
            // result in minority for a character thus you can remove all those
            // char, else take whole string, the main ideas/solution is that you
            // have to either take whooe string or s - ('0' || '1')
            cout << min(one, zero) << "\n";
        }
    }

    return 0;
}
