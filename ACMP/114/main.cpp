#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    vector<vector<long long> > dp(n - 1, vector<long long>(2, 0));
    dp[0][1] = k - 1;
    dp[0][0] = 1;
    for (int i = 1; i < n - 1; i++) {
        dp[i][1] = (k - 1) * (dp[i - 1][1] + dp[i - 1][0]);
        dp[i][0] = dp[i - 1][1];
    }
    long long res = 0;
    out << (dp.back()[0] + dp.back()[1]) * (k - 1);
    return 0;
}