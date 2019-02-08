#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, h, m;
    long long i = 0;
    cin >> x >> h >> m;
    while (!(h % 10 == 7 || m % 10 == 7)) {
        m -= x;
        if (m < 0) {
            h--;
            m = 60 + m;
        }
        if (h < 0) {
            h = 24 + h;
        }
        i++;
    }
    cout << i;
    return 0;
}
