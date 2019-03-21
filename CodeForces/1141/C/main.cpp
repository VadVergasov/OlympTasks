#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mn = 1e6, pos;
    cin >> n;
    vector<int> q(n - 1), res(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> q[i];
        if (mn != q[i]) {
            mn = min(mn, q[i]);
            if (mn == q[i]) {
                pos = i + 1;
            }
        }
    }
    res[pos] = 1;
    for (int i = pos - 1; i >= 0; i--) {
        res[i] = res[i + 1] - q[i];
    }
    for (int i = pos + 1; i < n; i++) {
        res[i] = res[i - 1] + q[i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}