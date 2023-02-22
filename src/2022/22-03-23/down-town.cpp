#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

void len(pair<int, int> p1, pair<int, int> p2) {
    printf("%.10lf\n",
           sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2)));
}

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        pair<int, int> p1, p2, p3;
        cin >> p1.first >> p1.second;
        cin >> p2.first >> p2.second;
        cin >> p3.first >> p3.second;

        if (p1.second == p2.second && p3.second < p1.second) {
            len(p1, p2);
        } else if (p2.second == p3.second && p1.second < p2.second) {
            len(p2, p3);
        } else if (p1.second == p3.second && p2.second < p1.second) {
            len(p1, p3);
        } else {
            cout << "0\n";
        }
    }
    // code;
    return 0;
}
