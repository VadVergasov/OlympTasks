#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        bool res = true;
        for (int j = max(i - x, 0); j <= min(i + y, n - 1); j++) {
            if (i != j && a[i] >= a[j]) {
                res = false;
                break;
            }
        }
        if (res) {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}