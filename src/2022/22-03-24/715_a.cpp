#include <bits/stdc++.h>
using namespace std;

int main() {
    int __;
    scanf("%d", &__);
    while (__--) {

        int n;
        cin >> n;

        vector<int> odd;
        vector<int> even;

        while (n--) {
            int tmp;
            cin >> tmp;
            if (tmp % 2 == 0)
                even.push_back(tmp);
            else
                odd.push_back(tmp);
        }

        for (auto x : odd)
            cout << x << " ";
        for (auto x : even)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}
