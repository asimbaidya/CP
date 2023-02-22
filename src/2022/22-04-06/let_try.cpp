#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {

        int n;
        cin >> n;
        set<int> s;

        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            s.insert(a);
        }

        int d = s.size();

        int x = n - d;
        for (int i = 0; i < d; i++) {
            cout << d << " ";
        }

        for (int i = 0; i < x; i++) {
            d++;
            cout << d << " ";
        }
        cout << "\n";
    }
    return 0;
}
