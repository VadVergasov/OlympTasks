#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        if ((a + b + c + n) % 3 == 0 && (a + b + c + n) / 3 >= max({a, b, c})) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}