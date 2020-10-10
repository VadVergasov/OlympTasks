#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || b + c == a || a + c == b) {
        cout << 0;
    } else {
        if ((a + b + c) % 2 == 1) {
            cout << -1;
        } else {
            int sum = a + b + c;
            vector<int> v = {a, b, c};
            sort(begin(v), end(v));
            if (a == v[2]) {
                cout << 1;
            } else if (b == v[2]) {
                cout << 2;
            } else {
                cout << 3;
            }
            cout << "\n" << (sum / 2) - v[0] << " " << (sum / 2) - v[1];
        }
    }
    return 0;
}