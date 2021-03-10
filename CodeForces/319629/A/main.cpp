#include <bits/stdc++.h>

using namespace std;

long long binpow(long long n, long long p) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
        }
        n *= n;
        p >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 1; i < 9 * n; i++) {
        long long a = 0, b = b = binpow(10, n - 1), sum = i, j = n - 1;
        while (sum) {
            a += min(9LL, sum) * binpow(10, j);
            j--;
            sum = max(0LL, sum - 9);
        }
        sum = i - 1;
        j = 0;
        while (sum) {
            b += min(9LL, sum) * binpow(10, j);
            j++;
            sum = max(0LL, sum - 9);
        }
        res = max(res, a - b);
    }
    cout << res;
    return 0;
}
