// https://codeforces.com/problemset/problem/1304/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (abs(x - y) % (a + b) == 0) {
            cout << abs(x - y) / (a + b) << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}