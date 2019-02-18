#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n, x1, x2, y1, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        if (y1 < y2) {
            if (y1 == (n - y2 + 1)) {
                if ((y2 - y1) % 2 == 0) {
                    cout << "Draw\n";
                } else {
                    if (x1 != x2) {
                        cout << "Draw\n";
                    } else {
                        cout << "Miron\n";
                    }
                }
            } else {
                if (y1 > n - y2 + 1) {
                    cout << "Miron\n";
                } else {
                    cout << "Slava\n";
                }
            }
        } else if (y1 == y2) {
            cout << "Draw\n";
        } else {
            if ((n - y1 + 1) == y2) {
                if ((y2 - y1) % 2 == 0) {
                    cout << "Draw\n";
                } else {
                    if (x1 != x2) {
                        cout << "Draw\n";
                    } else {
                        cout << "Miron\n";
                    }
                }
            } else {
                if (n - y1 + 1 > y2) {
                    cout << "Miron\n";
                } else {
                    cout << "Slava\n";
                }
            }
        }
    }
    return 0;
}