#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t, n, a, b, k;
    cin >> t >> n >> a >> b >> k;
    long long num = (a + b) * (n / 2);
    if (n % 2 == 1) {
        num += a;
    }
    if (n < k) {
        cout << 0;
        return 0;
    }
    cout << min(num / k, t);
    return 0;
}