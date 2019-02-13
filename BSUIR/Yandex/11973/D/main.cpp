#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<bool> a(n, true);
    for (long long i = 4; i <= n; i += 2) {
        a[i] = false;
    }
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (a[i]) {
            for (long long j = i * i; j <= n; j += i) {
                a[j] = false;
            }
        }
    }
    long long res1 = 0, res2 = 0;
    for (long long i = 3; i <= n; i += 2) {
        if (a[i]) {
            if (i % 4 == 3) {
                res2++;
            }
            if (i % 4 == 1) {
                res1++;
            }
        }
    }
    cout << res1 << " " << res2;
    return 0;
}