#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m <= n) {
        cout << n - m;
        return 0;
    }
    int cur = abs(m - n), i = 0;
    while (cur > abs(m - n * 2)) {
        cur = abs(m - n);
        n *= 2;
        i++;
    }
    i += abs(n - m);
    cout << i;
    return 0;
}
