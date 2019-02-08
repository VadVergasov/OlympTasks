#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x;
    if (k == 0) {
        x = a[0] - 1;
    } else {
        x = a[k - 1];
    }
    int num = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= x) {
            num++;
        }
    }
    if (num != k || x == 0) {
        cout << -1;
    } else {
        cout << x;
    }
    return 0;
}