#include <bits/stdc++.h>

using namespace std;

int main() {
    int num, res = 0;
    bool ab = false;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if ((double)(b) / (double)(m) < a) {
        ab = true;
    }
    if (ab) {
        num = floor((double)(n) / (double)(m));
        res += num * b;
        if ((n - num * m) * a > b) {
            res += b;
        } else {
            res += (n - num * m) * a;
        }
    } else {
        res += n * a;
    }
    cout << res;
    return 0;
}
