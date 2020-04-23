// https://codeforces.com/contest/1332/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, x, y, x1, y1, x2, y2;
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
        if (x + (a - b) >= x1 && x + (a - b) <= x2 && y + (c - d) >= y1 &&
            y + (c - d) <= y2) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}