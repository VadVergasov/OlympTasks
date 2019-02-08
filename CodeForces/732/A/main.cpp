#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, res = 1;
    cin >> n >> k;
    if (k % n == 0) {
        cout << k / n;
        return 0;
    }
    while ((res * 10 + k) % n != 0 && res * 10 % n != 0) {
        res++;
    }
    if ((res * 10 + k) % n == 0) {
        cout << ((res * 10 + k) / n);
    } else {
        cout << res * 10 / n;
    }
    return 0;
}
