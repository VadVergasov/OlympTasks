#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (abs(x1 - x3) + abs(y1 - y3) ==
            (int)max(abs(x2 - x3), abs(y2 - y3))) {
            cout << "Same time\n";
        } else if (abs(x1 - x3) + abs(y1 - y3) >
                   max(abs(x2 - x3), abs(y2 - y3))) {
            cout << "Second\n";
        } else {
            cout << "First\n";
        }
    }
    return 0;
}