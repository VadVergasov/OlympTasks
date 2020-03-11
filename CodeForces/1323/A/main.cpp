// https://codeforces.com/contest/1323/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> a(n);
        int res = 0;
        vector<int> r;
        int last = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0 && res == 0) {
                res = 1;
                r.push_back(i + 1);
            }
            if (res == 0 && last == -1 && a[i] % 2 == 1) {
                last = i + 1;
            } else if (res == 0 && last != -1 && a[i] % 2 == 1) {
                res = 2;
                r.push_back(last);
                r.push_back(i + 1);
            }
        }
        if (res == 0) {
            cout << "-1\n";
            continue;
        }
        cout << res << "\n";
        for (auto i : r) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}