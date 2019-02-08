#include <bits/stdc++.h>

using namespace std;

int main() {
    string x, y;
    int m, s, i;
    cin >> m >> s;
    if (s == 0) {
        if (m != 1) {
            cout << "-1 -1";
        } else {
            cout << "0 0";
        }
        return 0;
    }
    for (i = 0; i < m; i++) {
        int t = min(s, 9);
        x += t + '0';
        s -= t;
    }
    if (s > 0) {
        cout << "-1 -1";
        return 0;
    }
    for (i = m - 1; i > -1; i--) {
        y += x[i];
    }
    for (i = 0; y[i] == '0'; i++)
        ;
    y[i]--;
    y[0]++;
    cout << y << ' ' << x;
    return 0;
}
