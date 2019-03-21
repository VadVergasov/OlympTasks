#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = 0, s = 0, e = 0, cur = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            cur++;
        } else {
            res = max(res, cur);
            cur = 0;
        }
    }
    int i = 0;
    while (a[i] == 1) {
        i++;
    }
    s = i;
    i = n - 1;
    while (a[i] == 1) {
        i--;
    }
    e = n - i - 1;
    res = max(res, s + e);
    cout << res;
    return 0;
}