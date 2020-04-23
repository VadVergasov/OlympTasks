// https://codeforces.com/contest/1343/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        long long sum = 0;
        bool f = true;
        if (a[0] < 0) {
            f = false;
        }
        for (int i = 0; i < n; i++) {
            if (!f) {
                int mn = -1e9;
                while (a[i] < 0 && i < a.size()) {
                    mn = max(mn, a[i]);
                    i++;
                }
                i--;
                sum += mn;
                f = true;
            } else {
                int mx = 0;
                while (a[i] > 0 && i < a.size()) {
                    mx = max(mx, a[i]);
                    i++;
                }
                i--;
                sum += mx;
                f = false;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}