#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = 0, num = 0, mx = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            num++;
        } else {
            res = max(res, num);
            num = 0;
        }
    }
    res = max(res, num);
    cout << res;
    return 0;
}