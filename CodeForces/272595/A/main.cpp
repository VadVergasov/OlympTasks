#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (auto &i : x) {
        cin >> i;
    }
    sort(x.begin(), x.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int l = lower_bound(begin(x), end(x), 2 * x[j] - x[i]) - begin(x),
                r = lower_bound(begin(x), end(x), 2 * (x[j] - x[i]) + x[j]) -
                    begin(x);
            if (x[j] - x[i] > x[l] - x[j]) {
                l++;
            }
            if (2 * (x[j] - x[i]) < x[r] - x[j] || r == n) {
                r--;
            }
            if (l == n || l > r) {
                continue;
            }
            // cout << x[i] << " " << x[j] << " " << l << " " << r << "\n";
            res += r - l + 1;
        }
    }
    cout << res;
    return 0;
}