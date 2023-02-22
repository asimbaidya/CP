#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    for (int i = 0; i < 100; i++) {
        q.push(i);
    }

    cout << q.front() << "\n";
    cout << q.front() << "\n";
    cout << q.front() << "\n";
    cout << q.back() << "\n";
    cout << q.back() << "\n";
    cout << q.back() << "\n";

    q.pop();  // dows not return anything

    return 0;
}
