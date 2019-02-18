#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = 0, cur = 1;
    vector<int> a(n);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.push_back(0);
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i + 1]) {
            cur++;
        } else {
            res = max(res, cur);
            cur = 1;
        }
    }
    cout << res;
    return 0;
}