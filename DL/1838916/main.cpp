#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n));
    vector<int> mn(n, 1e9);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            mn[j] = min(mn[j], a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j][i] == mn[i]) {
                a[j][i] = 0;
                break;
            }
        }
    }
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}