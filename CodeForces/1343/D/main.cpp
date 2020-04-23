// https://codeforces.com/contest/1343/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> mp;
        for (auto &i : a) {
            cin >> i;
        }
        for (int i = 0; i < n / 2; i++) {
            mp[a[i] + a[n - i - 1]]++;
        }
        int res = n / 2;
        for (auto [f, s] : mp) {
            if (f <= k + 1) {
                res = min(res, n / 2 - s);
            }
        }
        cout << res << "\n";
    }
    return 0;
}