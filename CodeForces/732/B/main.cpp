#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, res = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + a[i + 1] < k) {
            res += k - (a[i] + a[i + 1]);
            a[i + 1] += k - (a[i] + a[i + 1]);
        }
    }
    cout << res << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}