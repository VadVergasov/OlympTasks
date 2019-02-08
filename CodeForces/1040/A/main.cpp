#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, tmp;
    cin >> n >> a >> b;
    vector<int> c;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        c.push_back(tmp);
    }
    for (int i = 0; i < n / 2; i++) {
        if (c[i] == 2 || c[n - i - 1] == 2) {
            continue;
        }
        if (c[i] != c[n - i - 1]) {
            cout << -1;
            return 0;
        }
    }
    int res = 0;
    for (int i = 0; i < n / 2; i++) {
        if (c[i] == 2) {
            if (c[n - i - 1] == 2) {
                res += 2 * min(a, b);
            } else if (c[n - i - 1] == 1) {
                res += b;
            } else {
                res += a;
            }
        } else if (c[n - i - 1] == 2) {
            if (c[i] == 2) {
                res += 2 * min(a, b);
            } else if (c[i] == 1) {
                res += b;
            } else {
                res += a;
            }
        }
    }
    if (n % 2 == 1 && c[ceil((double)n / 2.0) - 1] == 2) {
        res += min(a, b);
    }
    cout << res;
    return 0;
}
