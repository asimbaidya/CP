#include <bits/stdc++.h>
#define showl(x) cout << __LINE__ << ". " << #x << ": " << x << "\n"
#define show(x) cout << #x << ": " << x << "\n"
using namespace std;

double dis(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main(int argc, char *argv[]) {
    double a, b;
    cin >> a >> b;

    double len = dis(a, b);

    cout << fixed;
    cout << setprecision(10);
    cout << a / len << " " << b / len << "\n";
    return 0;
}
