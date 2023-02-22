#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
#define nl "\n"
#define sp " "
using namespace std;

vector<pair<int, int>> mp(100000);

int main() {
    int test;
    cin >> test >> ws;
    while (test--) {
        int n;
        cin >> n;
        map<int, int> m;

        int t;
        for (int i = 0; i < n; i++) {
            cin >> t;
            mp[i] = make_pair(t, i + 1);
            m[t]++;
        }

        bool flag = true;
        for (auto x : m) {
            if (x.second == 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            sort(mp.begin(), mp.begin() + n);  // bug 1

            // bug 2
            queue<pair<int, int>> q;
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    q.push(mp[i]);  // push first element on queue
                    continue;
                }
                // bug 3
                if (mp[i].first != q.front().first) {
                    cout << q.front().second << " ";
                    q.pop();
                    q.push(mp[i]);
                } else {
                    cout << mp[i].second << " ";
                }
            }
            cout << q.front().second << "\n";
        } else {
            cout << "-1\n";
        }

        // O => (n log(n))+n
    }

    return 0;
}
