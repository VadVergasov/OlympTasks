#include <bits/stdc++.h>

long long fact(long long n, long long p) {
    long long res = 1;
    while (n > 1) {
        res = (res * ((n / p) % 2 ? p - 1 : 1)) % p;
        for (int i = 2; i <= n % p; ++i) {
            res = (res * i) % p;
        }
        n /= p;
    }
    return res % p;
}

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    cout << fact(n, m) << "\n";
    cin >> n >> m;
    cout << fact(n, m) << "\n";
    cin >> n >> m;
    cout << fact(n, m);
    return 0;
}