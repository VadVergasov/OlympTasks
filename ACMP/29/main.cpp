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
    vector<long long> dp(n);
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    dp[2] = min(dp[1] + abs(a[2] - a[1]), (long long)(3 * abs(a[2] - a[0])));
    for (int i = 3; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]),
                    (long long)(3 * abs(a[i] - a[i - 2])));
    }
    for (int i = 0; i < n; i++) {
        cout << dp[i];
    }
    return 0;
}
