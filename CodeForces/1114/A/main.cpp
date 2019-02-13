#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if (a >= x && (a - x) + b >= y && ((a - x) + b - y) + c >= z) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}