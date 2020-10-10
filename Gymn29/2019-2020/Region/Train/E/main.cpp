#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double f = a / b, s = c / d;
    if (f > s) {
        cout << 1;
    } else if (f < s) {
        cout << -1;
    } else {
        cout << 0;
    }
    return 0;
}