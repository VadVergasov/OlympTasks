#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("floyd.in");
    ofstream cout("floyd.out");
    int n;
    cin >> n;
    vector<vector<int> > d(n, vector<int>(n));
    for (auto &i : d) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    for (auto i : d) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
