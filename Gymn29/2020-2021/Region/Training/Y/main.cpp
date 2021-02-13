#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    if (n == 1) {
        out << 1 << endl;
        return 0;
    }
    if (n == 3) {
        out << 4 << endl;
        return 0;
    }
    vector<vector<long long> > dp(n + 6, vector<long long>(7, 0));
    dp[1][1] = 1;
    dp[1][0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= 3; ++j) {
            dp[i + 1][j + 1] += dp[i][j];
            if (j) dp[i + 1][0] += dp[i][j];
        }
    }
    long long res = 0;
    for (int i = 0; i <= 3; ++i) res += dp[n][i];
    out << res;
    return 0;
}
