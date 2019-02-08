#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && c == 0 || b == 0 && c == 0) {
        cout << 0;
    } else {
        if (b > a) {
            if (b >= a + c) {
                cout << (a + c) * 2;
            } else {
                for (int i = 0; i < c; i++) {
                    a > b ? b++ : a++;
                }
                cout << min(a, b) * 2;
            }
        } else {
            if (a >= b + c) {
                cout << (b + c) * 2;
            } else {
                for (int i = 0; i < c; i++) {
                    a > b ? b++ : a++;
                }
                cout << min(a, b) * 2;
            }
        }
    }
    return 0;
}
