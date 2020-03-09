#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int> > g(3, vector<int>(3));
    vector<vector<bool> > f(3, vector<bool>(3));
    for (auto &i : g) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (g[j][k] == b) {
                    f[j][k] = true;
                }
            }
        }
    }
    if (f[0][0] && f[0][1] && f[0][2] || f[0][0] && f[1][0] && f[2][0] ||
        f[0][0] && f[1][1] && f[2][2] || f[0][2] && f[1][1] && f[2][0] ||
        f[1][0] && f[1][1] && f[1][2] || f[2][0] && f[2][1] && f[2][2] ||
        f[0][1] && f[1][1] && f[2][1] || f[0][2] && f[1][2] && f[2][2]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}