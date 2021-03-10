#include <bits/stdc++.h>

using namespace std;

int main() {
    long long l, r, k, res = 0;
    cin >> l >> r >> k;
    for (long long i = floor(l / k) * k; i <= r; i += k) {
        if (i < l) {
            continue;
        }
        res += i;
    }
    cout << res;
    return 0;
}
