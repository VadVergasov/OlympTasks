#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 1, n, m, sz = 0;
    cin >> n >> m;
    long long a = m;
    if (n == m || n > 26) {
        cout << m;
    } else {
        while (a) {
            sz++;
            a /= 10;
        }
        long long to = pow(10, sz + 1);
        for (int i = 0; i < n; i++) {
            res *= 2;
            res %= to;
        }
        cout << m % res;
    }
    return 0;
}
