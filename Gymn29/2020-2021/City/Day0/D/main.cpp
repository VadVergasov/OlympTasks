#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << "1 2 2" << endl;
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0) {
            cout << "! 1" << endl;
            return 0;
        } else {
            cout << "! 2" << endl;
            return 0;
        }
    }
    int l = 1, r = n, m = (r + l) / 2;
    while (1) {
        m = (r + l) / 2;
        if (m == l) {
            break;
        }
        cout << l << " " << m << " " << r << endl;
        int x, y, z;
        cin >> x >> y >> z;
        if (y == 0) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << "! " << r << endl;
    return 0;
}
