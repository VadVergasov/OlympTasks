#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    if (y == 0 || x != 0 && y == 1) {
        cout << "NO";
        return 0;
    }
    if (y - 1 == x && y > 0) {
        cout << "YES";
        return 0;
    }
    int i = y - 1;
    while (i < x) {
        i += 2;
    }
    if (i == x) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
    }
    return 0;
}
