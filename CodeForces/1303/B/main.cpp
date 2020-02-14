// https://codeforces.com/contest/1303/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    long double t;
    cin >> t;
    for (long double q = 0; q < t; q++) {
        long long n, b, g, good;
        cin >> n >> g >> b;
        good = ceil((double)n / 2.0);
        long long l = n, r = 1e18, res = 1e18;
        while (l <= r) {
            long long m = (l + r) / 2;
            long long tmp = g * (m / (b + g)) + min(g, m % (g + b));
            if (tmp >= good) {
                res = min(res, m);
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}