#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0, y = 0, n;
    cin >> n;
    char a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 'U') {
            x++;
        } else if (a == 'D') {
            x--;
        } else if (a == 'L') {
            y--;
        } else {
            y++;
        }
    }
    cout << n - abs(y) - abs(x);
    return 0;
}
