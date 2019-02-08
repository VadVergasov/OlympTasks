#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && c == 0) {
        cout << 0;
        return 0;
    }
    (a / b) > (c / d) ? cout << 1 : cout << -1;
    return 0;
}
