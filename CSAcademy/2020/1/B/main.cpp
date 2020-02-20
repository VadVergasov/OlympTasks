#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    int res = 1e9;
    vector<int> b = a;
    for (int i = 0; i < n; i++) {
        if (1e9 - b[i] < b[i]) {
            b[i] = 1e9 - b[i];
        }
    }
    int mx = 0, mn = 1e9;
    for (auto i : b) {
        mx = max(mx, i);
        mn = min(mn, i);
    }
    res = min(res, mx - mn);
    b = a;
    mx = 0;
    mn = 1e9;
    for (auto &i : b) {
        if (1e9 - i > i) {
            i = 1e9 - i;
        }
    }
    for (auto i : b) {
        mn = min(mn, i);
        mx = max(mx, i);
    }
    res = min(res, mx - mn);
    cout << res;
    return 0;
}