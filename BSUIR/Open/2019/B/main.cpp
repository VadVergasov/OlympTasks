#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int an = 0, x, y, ax, ay, ans = 1e9;
    for (int i = 0; i <= n; ++i) {
        int x = i, y = n;
        bool f = 0;
        int cnt = 10;
        while (y - x >= 0) {
            if (x == 0 || y == 0) {
                break;
            }
            an = y;
            y = x;
            x = an - x;
        }
        if (y + x < ans || (y + x == ans && x < ax)) {
            ans = y + x;
            ax = x, ay = y;
        }
    }
    cout << ax << " " << ay << '\n';
}