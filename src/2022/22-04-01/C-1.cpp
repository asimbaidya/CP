// WA
#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

int main(int argc, char *argv[]) {
    int ttt;
    scanf("%d", &ttt);

    while (ttt--) {
        string s;
        cin >> s;

        vector<char> alp;
        map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() - 1 && s[i] == s[i + 1]) {
                // cout << "Match: " << s[i] << " " << s[i + 1] << "\n";
            } else if (i == s.size() - 1) {
                alp.push_back(s[i]);
                mp[s[i]]++;
            } else {
                alp.push_back(s[i]);
                alp.push_back(s[i + 1]);
                mp[s[i]]++;
                mp[s[i + 1]]++;
            }
            i++;
        }

        vector<char> st;
        int ans = 0;

        map<char, int> wtf;

        for (auto ch : alp) {
            if (mp[ch] % 2 == 1) {
                mp[ch]--;
                // show(ans);
                ans++;
            }
        }

        for (int i = 0; i < alp.size(); i++) {
            mp[alp[i]]--;
            if (mp[alp[i]] >= 0)
                st.push_back(alp[i]);
            else {
                // show(ans);
                // ans++;
            }
        }

        // for (auto x : st) {
        //     cout << x << " ";
        // }
        // cout << "\n";

        int i = 0;
        while (i < st.size()) {
            int j;
            if (i == st.size() - 1) {
                ans++;
                break;
            }
            for (j = i + 1; j < st.size(); j++) {
                if (st[i] != st[j])
                    ans++;
                else {
                    break;
                }
            }
            i = j + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
