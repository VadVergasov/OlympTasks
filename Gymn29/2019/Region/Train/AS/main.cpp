#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<vector<long long> > dp(n + 1, vector<long long>(4, 0));
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < 4; j++) {
            dp[i][0] += dp[i - 1][j];
            for (int k = max(0, i - 4); k < i; k++) {
                dp[i][j] += dp[k][j - 1];
            }
        }
    }
    long long res = 0;
    for (int i = 1; i < 4; i++) {
        res += dp[n][i];
    }
    cout << res;
    return 0;
}