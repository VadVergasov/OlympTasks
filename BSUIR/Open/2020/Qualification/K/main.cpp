#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> dec;
    vector<int> dig{4, 6, 7, 9, 0};
    while (n) {
        dec.push_back(n % 10);
        n /= 10;
    }
    n = dec.size();
    reverse(begin(dec), end(dec));
    vector<vector<long long> > dp(n + 1, vector<long long>(2));
    dp[0][1] = 1;
    for (int i = 0; i < n; ++i) {
        for (int fl = 0; fl < 2; ++fl) {
            for (auto x : dig) {
                if ((x > dec[i] && fl == 1)) {
                    continue;
                }
                dp[i + 1][fl & (x == dec[i])] += dp[i][fl];
            }
        }
    }
    cout << dp[n][1] + dp[n][0] << '\n';
    return 0;
}