#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<vector<int> > a(n, vector<int>(m)),
        dp(n + 1, vector<int>(m + 1, 10e8));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> a[i][j];
        }
    }
    dp[1][1] = a[0][0];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = min({dp[i - 1][j] + a[i - 1][j - 1],
                            dp[i][j - 1] + a[i - 1][j - 1], dp[i][j]});
        }
    }
    out << dp.back().back();
    return 0;
}