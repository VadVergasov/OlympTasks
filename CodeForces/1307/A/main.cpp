// https://codeforces.com/contest/1307/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        int res = a.front();
        for (int i = 1; i < n && d > 0; i++) {
            if (a[i] == 0) {
                continue;
            }
            res += min(a[i], d / i);
            d -= i * min(a[i], d / i);
        }
        cout << res << "\n";
    }
    return 0;
}