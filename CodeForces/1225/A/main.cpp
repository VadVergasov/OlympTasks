#include <bits/stdc++.h>

using namespace std;

int main() {
    int da, db;
    cin >> da >> db;
    if (da == 9 && db == 1) {
        cout << 9 << " " << 10;
        return 0;
    }
    if (db - da > 1 || db - da < 0) {
        cout << -1;
    } else {
        if (db - da == 1) {
            cout << da << " " << db;
        } else {
            cout << da << 0 << " " << db << 1;
        }
    }
    return 0;
}