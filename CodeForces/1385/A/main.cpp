// https://codeforces.com/contest/1385/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == y && x >= z) {
            cout << "YES\n" << z << " " << z << " " << x;
        } else if (x == z && z >= y) {
            cout << "YES\n" << y << " " << y << " " << x;
        } else if (y == z && y >= x) {
            cout << "YES\n" << x << " " << x << " " << y;
        } else {
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}