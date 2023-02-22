#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    string s;
    cin >> s;

    int hug = 0;

    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            hug++;
        }
        i++;
        j--;
    }


    cout<<hug<<"\n";
    return 0;
}
