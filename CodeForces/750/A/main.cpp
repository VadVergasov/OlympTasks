#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, t = 240, res = 0, t1 = 0;
    cin >> n >> k;
    t -= k;
    while (t1 + (res + 1) * 5 <= t && res < n) {
        res++;
        t1 += 5 * res;
    }
    cout << res;
    return 0;
}
