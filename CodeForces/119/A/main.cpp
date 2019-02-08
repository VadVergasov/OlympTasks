#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n, res = 0;
    cin >> a >> b >> n;
    while (n - __gcd(a, n) > 0) {
        n -= __gcd(a, n);
        swap(a, b);
        res++;
    }
    if (res % 2 != 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
