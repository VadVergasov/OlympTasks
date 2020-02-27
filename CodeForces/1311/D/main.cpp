// https://codeforces.com/contest/1311/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long mn = 1e9, res1, res2, res3;
        for (int i = 1; i <= 2 * 1e4; i++) {
            long long sum = abs(b - i);
            int a1, a3;
            int sum1 = 1e9;
            for (int j = 1; j * j <= i; ++j) {
                if (i % j == 0) {
                    if (sum1 > abs(a - j)) {
                        sum1 = abs(a - j);
                        a1 = j;
                    }
                    if (sum1 > abs(a - i / j)) {
                        sum1 = abs(a - i / j);
                        a1 = i / j;
                    }
                }
            }
            sum += sum1;
            long long l = 1, r = 1e4, mid, ans;
            while (l <= r) {
                mid = (l + r) >> 1;
                if (mid * i >= c) {
                    ans = mid, r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            int sum2 = 1e9;
            if (abs(c - ans * i) < sum2) {
                sum2 = abs(c - ans * i);
                a3 = ans * i;
            }
            if (abs(c - (ans - 1) * i) < sum2 && ans != 1) {
                sum2 = abs(c - (ans - 1) * i);
                a3 = (ans - 1) * i;
            }
            sum += sum2;
            if (sum < mn) {
                mn = sum;
                res1 = i;
                res2 = a1;
                res3 = a3;
            }
        }
        cout << mn << "\n" << res2 << " " << res1 << " " << res3 << "\n";
    }
    return 0;
}