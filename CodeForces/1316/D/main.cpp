#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > a(n, vector<int>(n));
    for (auto &i : a) {
        for (auto &j : i) {
            cin >> j.first >> j.second;
        }
    }
    vector<vector<char> > field(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j].first - 1 == i && a[i][j].second - 1 == j) {
                field[i][j] = 'X';
            }
        }
    }
    return 0;
}