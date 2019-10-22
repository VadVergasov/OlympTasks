#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<vector<int> > a(n, vector<int>(m)), dp(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> a[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == m - 1 && i == n - 1) {
                continue;
            }
            if (i + a[i][j] < n) {
                dp[i + a[i][j]][j] += dp[i][j];
            }
            if (j + a[i][j] < m) {
                dp[i][j + a[i][j]] += dp[i][j];
            }
        }
    }
    out << dp.back().back();
    return 0;
}