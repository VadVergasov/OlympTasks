#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int y;
        cin >> y;
        cout << a[(y - 1) % n] << b[(y - 1) % m] << "\n";
    }
    return 0;
}