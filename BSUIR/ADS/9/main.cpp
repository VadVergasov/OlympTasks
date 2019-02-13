#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mx = 0;
    long long res = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    res += mx - a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            continue;
        } else {
            res -= a[i] - a[i - 1];
        }
    }
    cout << res;
    return 0;
}