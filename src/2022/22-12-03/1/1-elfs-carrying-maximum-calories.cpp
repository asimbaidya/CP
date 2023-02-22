#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // file reading
    fstream file;
    file.open("./input", ios::in);

    // reading line by line
    string line;
    long long mx = 0;
    long long curr = 0;
    while (getline(file, line)) {
        if (line == "") {
            mx = max(curr, mx);
            curr = 0;
        } else {
            curr += stoi(line);
        }
    }

    cout << mx << "\n";

    return 0;
}
