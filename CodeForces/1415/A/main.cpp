#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        cout << max({abs(n - r) + abs(m - c), abs(r - 1) + abs(m - c),
                     abs(n - r) + abs(c - 1), abs(r - 1) + abs(c - 1)})
             << "\n";
    }
    return 0;
}
