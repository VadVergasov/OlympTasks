#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char> > a(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
            a[i][j] = '#';
        }
        if (i + 1 != n) {
            if (i / 2 % 2 == 0) {
                a[i + 1][m - 1] = '#';
            } else {
                a[i + 1][0] = '#';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
