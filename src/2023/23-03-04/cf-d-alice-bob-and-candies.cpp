// https://codeforces.com/problemset/problem/1352/D
// simulation problem ?
// shit... raw implementation.. no shit
// bad for cp but good problem as a exercise on implementation

#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << "| " << #x << " = " << x << "\n"
#define show(x) cout << #x << " = " << x << "\n"

using namespace std;

const string nl = "\n";
const string sp = " ";

int arr[1000];

int main() {
    // FIO but do not use printf/scanf
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        //
        int first = 0, last = n - 1;
        long long int alice = 0, bob = 0, prev = 0, total_move = 0;

        long long int curr = 0;
        bool flag = true;
        while (flag) {
            // for alice
            curr = 0;
            while (first <= last && curr <= prev) {
                curr += arr[first];
                first++;
            }
            total_move++;
            alice += curr;
            prev = curr;
            curr = 0;

            if (first > last) {
                flag = false;
            }
            if (!flag) {
                break;
            }

            // for bob
            while (last >= first && curr <= prev) {
                curr += arr[last];
                last--;
            }
            total_move++;
            bob += curr;
            prev = curr;
            curr = 0;

            if (first > last) {
                flag = false;
            }
            // edge case
            if (!flag) {
                break;
            }
        }
        cout << total_move << sp << alice << sp << bob << nl;
    }

    return 0;
}
