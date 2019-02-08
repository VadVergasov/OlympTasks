#include <bits/stdc++.h>

using namespace std;

bool g, b, w;

int main() {
    int n, m;
    cin >> n >> m;
    char tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == 'G') {
                g = true;
            } else if (tmp == 'B') {
                b = true;
            } else if (tmp == 'W') {
                w = true;
            } else {
                cout << "#Color";
                return 0;
            }
        }
        if (b && w && g) {
            cout << "#Black&White";
            return 0;
        }
    }
    cout << "#Black&White";
    return 0;
}
