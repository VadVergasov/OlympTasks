// https://codeforces.com/contest/1315/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int res = 0;
        res = max({(y - 1) * x, (x - 1) * y, (a - x - 1) * (b - y),
                   (a - x) * (b - y - 1), x * (b - y - 1), (x - 1) * (b - y),
                   y * (a - x - 1), (y - 1) * (a - x), a * (b - y - 1),
                   b * (a - x - 1), a * y, b * x});
        cout << res << "\n";
    }
    return 0;
}