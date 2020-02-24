#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    vector<int> a(n);
    vector<long long> dp(n * 100000);
    dp[0] = 1;
    set<int> num;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
    }
    return 0;
}