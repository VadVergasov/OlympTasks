#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, sum = 0, table = 0;
    cin >> n >> m;
    vector<vector<long long> > a(n, vector<long long>(m));
    vector<long long> rows(n), columns(m);
    for (auto &i : a) {
        for (auto &j : i) {
            cin >> j;
            table += j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rows[i] += a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            columns[i] += a[j][i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j] * (table - columns[j] - rows[i] + a[i][j]);
        }
    }
    cout << sum;
    return 0;
}