#include <bits/stdc++.h>

using namespace std;

int binpow(int a, int n) {
    int res = 1;
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
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b, n, k, num = 0, i = 0, low, high, lb, rb, n1;
    in >> a >> b >> n >> k;
    k--;
    n1 = n;
    while (k > num) {
        k -= num;
        lb = binpow(10, i), rb = binpow(10, i + 1), low = lower(a, b, 0, n, lb),
        high = upper(a, b, 0, n, rb);
        num = (high - low + 1) * (i + 1);
        n1 -= (high - low);
        i++;
    }
    if (n1 < 0) {
        out << -1;
        return 0;
    }
    while (k >= i && low < n) {
        k -= i;
        low++;
    }
    if (k >= i) {
        out << -1;
        return 0;
    }
    out << to_string(a + b * low)[k];
    return 0;
}