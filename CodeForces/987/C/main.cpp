// https://codeforces.com/contest/987/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n), c(n);
    for (auto &i : s) {
        cin >> i;
    }
    for (auto &i : c) {
        cin >> i;
    }
    int res = 1e9;
    for (int j = 1; j < n - 1; j++) {
        int mn1 = 1e9, mn2 = 1e9;
        for (int i = 0; i < j; i++) {
            if (s[i] >= s[j]) {
                continue;
            }
            mn1 = min(mn1, c[i]);
        }
        for (int i = j + 1; i < n; i++) {
            if (s[i] <= s[j]) {
                continue;
            }
            mn2 = min(mn2, c[i]);
        }
        res = min(res, mn1 + mn2 + c[j]);
    }
    if (res == 1e9) {
        cout << -1;
        return 0;
    }
    cout << res;
    return 0;
}