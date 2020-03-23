#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        double x1, x2, c1, c2;
        cin >> x1 >> x2 >> c1 >> c2;
        cout << fixed << setprecision(6) << ((x2 + x1) * c2 - x1 * c1) / x2
             << "\n";
    }
    return 0;
}