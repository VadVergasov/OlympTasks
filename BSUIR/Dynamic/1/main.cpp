#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1, 0), path(n + 1, -1);
    a[0] = 1;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + 1;
        if (i % 2 == 0) {
            a[i] = min(a[i], a[i / 2] + 1);
        }
        if (i % 3 == 0) {
            a[i] = min(a[i], a[i / 3] + 1);
        }
        if (a[i] == a[i - 1] + 1) {
            path[i] = i - 1;
        } else if (i % 2 == 0 && a[i] == a[i / 2] + 1) {
            path[i] = i / 2;
        } else if (i % 3 == 0) {
            path[i] = i / 3;
        }
    }
    cout << a[n] << "\n";
    int cur = n;
    vector<int> res;
    for (int i = 0; i <= a[n]; i++) {
        res.push_back(cur);
        cur = path[cur];
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}