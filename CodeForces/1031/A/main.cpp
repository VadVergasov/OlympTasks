#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, h, k, res = 0;
    cin >> w >> h >> k;
    for (int i = 0; i < k; i++) {
        res += (w + h - 2 - 8 * i) * 2;
    }
    cout << res;
    return 0;
}
