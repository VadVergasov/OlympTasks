#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, y, z, k;
    cin >> x >> y >> z >> k;
    if (k % 2 == 0) {
        cout << x - y;
    } else {
        cout << y - x;
    }
    return 0;
}