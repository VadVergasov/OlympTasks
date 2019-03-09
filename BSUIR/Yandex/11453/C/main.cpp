#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

int main() {
    ifstream in("binary.in");
    ofstream out("binary.out");
    int n;
    in >> n;
    string s;
    in >> s;
    vector<long long> dp(n + 1, 0);
    long long sum = 0;
    int pos = 0;
    for (int i = n - 1; i > 0; i--) {
        if (s[i] == '1') {
            dp[i - 1] = 1;
            pos = i;
            break;
        }
    }
    for (int i = pos - 1; i > 0; i--) {
        sum += dp[i + 1];
        if (s[i] == '1') {
            dp[i - 1] = sum + 1;
            sum %= mod;
            cout << i << " " << dp[i - 1] << " " << sum << "\n";
        }
    }
    out << dp.front();
    return 0;
}