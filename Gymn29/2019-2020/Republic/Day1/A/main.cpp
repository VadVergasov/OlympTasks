#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, s, k, all;
        cin >> n >> s >> k;
        all = (n * (n + 1)) / 2;
        long long res = s * s;
        for (int i = (long long)(s / all); i <= (long long)(s / all); i++) {
            res = max(res, k * i + (s - i * (all - 1)) * (s - i * (all - 1)) +
                               (i * i) * (n - 1));
        }
        cout << res << "\n";
    }
    return 0;
}