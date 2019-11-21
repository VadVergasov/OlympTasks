#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    a /= 2;
    b /= 2;
    c /= 2;
    b -= a / 2;
    c -= a / 2;
    cout << fixed << setprecision(4) << (b + c) * 2;
    return 0;
}