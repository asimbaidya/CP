#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define print(x) cout << x << "\n";
using namespace std;

int main(int argc, char *argv[]) {

    int ttt;
    scanf("%d", &ttt);
    while (ttt--) {
        int l, r, a;
        cin >> l >> r >> a;

        int i = r / a;
        int j = l / a;

        if (i == j) {
            show(r / a + r % a);
            // print(r / a + r % a);
        } else {
            // print(max(r / a + r % a, (r / a) + a - 2));
            show(max(r / a + r % a, (r / a) + a - 2));
            show(r / a + r % a);
            show(r / a + a - 2);
        }

        show((r / a + r) % a); // first I though
    }

    /*
     * simplified:
     * max div = r/a;
     * max mod = (a-1)
     *
     * if r%a != (a-1) but a-1 exist as solution,
     * then we have to think about those situation.
     *
     * BUT: most important idea,
     * when x is max, we will have optimal solution if not (a-1) exist
     * and x does not give (a-1)
     */
    return 0;
}
