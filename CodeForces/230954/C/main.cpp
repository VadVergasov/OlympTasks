#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> c(n);
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int fir = c[i];
        for (int j = i; j < n; j++) {
            if (c[j] - fir < x) {
                continue;
            }
            cout << sum << " " << c[j] << " " << fir << "\n";
            sum += c[j];
            a[sum]++;
        }
    }
    int res = 0;
    for (auto i : a) {
        if (i.first >= l && i.first <= r) {
            res += i.second;
        }
    }
    cout << res;
    return 0;
}