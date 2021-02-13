#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        cnt[t]++;
    }
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        int cur = 0;
        for (int j = 1; j <= n / i; j++) {
            cur += i - j * (i / j);
        }
        cur *= cnt[i];
        res += cur;
    }
    cout << res;
    return 0;
}
