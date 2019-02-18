#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, v, res = 0, i = 2, cur = 0;
    cin >> n >> v;
    res = min(v, n - 1);
    n -= v + 1;
    while (n > 0) {
        res += i;
        i++;
        n--;
    }
    cout << res;
    return 0;
}