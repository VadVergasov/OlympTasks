#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = -1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m;
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = a[i] + a[j];
            auto l = upper_bound(a.begin(), a.end(), m - sum);
            l--;
            if ((int)(l - a.begin()) == i || (int)(l - a.begin()) == j) {
                continue;
            }
            if (sum + (*l) <= m) {
                res = max(sum + (*l), res);
            }
        }
    }
    cout << res;
    return 0;
}