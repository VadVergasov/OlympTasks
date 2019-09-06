#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    sort(a.begin(), a.end());
    vector<vector<int> > dp(n, vector<int>(n, 10e8));
    dp[0][0] = 0;
    for (int i = 1; i < n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i][0]);
        dp[i][1] = min({dp[i - 1][0] + (a[i] - a[i - 1]), dp[i][1],
                        dp[i - 1][1] + (a[i] - a[i - 1])});
    }
    out << dp[n - 1][1];
    return 0;
}