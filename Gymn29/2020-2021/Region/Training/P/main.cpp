#include <bits/stdc++.h>

using namespace std;

long long binpow(int a, int n) {
    long long res = 1;
    while (n) {
        if (n & 1) {
            res *= a;
        }
        a *= a;
        n >>= 1;
    }
    return res;
}

int lower(int a, int b, int l, int r, int val) {
    int res = -1;
    while (l <= r) {
        int m = (r + l) >> 1;
        if (a + b * m >= val) {
            r = m - 1;
            res = m;
        } else {
            l = m + 1;
        }
    }
    if (res == -1) {
        return -1;
    }
    return l;
}

int upper(int a, int b, int l, int r, int val) {
    int res = -1;
    while (l <= r) {
        int m = (l + r) >> 1;
        if (a + b * m < val) {
            l = m + 1;
            res = m;
        } else {
            r = m - 1;
        }
    }
    if (res == -1) {
        return -1;
    }
    return res;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long a, b, n, k, num = 0, i = 0, low, high, lb, rb, n1;
    in >> a >> b >> n >> k;
    k--;
    while (k - num > 0) {
        k -= num;
        lb = binpow(10, i);
        rb = binpow(10, i + 1);
        low = lower(a, b, 0, n, lb);
        high = upper(a, b, 0, n, rb);
        num = (high - low + 1) * (i + 1);
        if (high == n) {
            if (k - num >= 0) {
                out << -1;
                return 0;
            }
            break;
        }
        i++;
    }
    int t = low;
    low += floor((double)k / (double)to_string(a + b * low).size());
    k -= (low - t) * to_string(a + b * t).size();
    out << to_string(a + b * low)[k];
    return 0;
}
