#include <bits/stdc++.h>

using namespace std;

int main() {
    long long mod = 100000000000000007, n, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        unsigned long long t;
        cin >> t;
        res = res % mod + t % mod;
        res %= mod;
    }
    cout << res;
    return 0;
}