#include <bits/stdc++.h>

using namespace std;

int main() {
    long long sum = 0;
    int n, mn = 1e9;
    cin >> n;
    vector<int> a(n), res;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mn = min(mn, a[i]);
    }
    if (sum - 2 * mn < 0) {
        cout << -1;
    }
    for (int i = 0; i < n; i++) {
        int cur = (sum - a[i]) / abs(a[i]);
        if (a[i] >= 0) {
            if (sum - cur * a[i] >= 0 && (sum - cur * a[i]) % 2 == 0) {
                res.push_back(sum - cur * a[i]);
            } else if (sum - (cur - 1) * a[i] >= 0 &&
                       (sum - (cur - 1) * a[i]) % 2 == 0) {
                res.push_back(sum - (cur - 1) * a[i]);
            }
        } else {
            if (sum + cur * a[i] >= 0 && (sum + cur * a[i]) % 2 == 0) {
                res.push_back(sum + cur * a[i]);
            } else if (sum + (cur - 1) * a[i] >= 0 &&
                       (sum + (cur - 1) * a[i]) % 2 == 0) {
                res.push_back(sum + (cur - 1) * a[i]);
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res.front();
    return 0;
}