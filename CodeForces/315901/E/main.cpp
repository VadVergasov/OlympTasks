#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("diameter.in");
    ofstream cout("diameter.out");
    int n;
    cin >> n;
    vector<vector<int> > d(n, vector<int>(n));
    for (auto &i : d) {
        for (auto &j : i) {
            cin >> j;
            if (j == -1) {
                j = 1e9;
            }
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (d[i][k] < 1e9 && d[k][j] < 1e9) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
    int diam = -1e9, radius = 1e9;
    for (int i = 0; i < n; i++) {
        int mx = -1e9;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            mx = max(mx, d[i][j]);
        }
        radius = min(radius, mx);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || d[i][j] == 1e9) {
                continue;
            }
            diam = max(diam, d[i][j]);
        }
    }
    cout << diam << "\n" << radius;
    return 0;
}
