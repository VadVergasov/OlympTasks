#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &i : a) {
        cin >> i;
    }
    b.back() = a.back() + 1;
    for (int i = n - 2; i >= 0; i--) {
        b[i] = max(a[i] + 1, b[i + 1] - 1);
    }
    // for (auto i : b) {
    //     cout << i << " ";
    // }
    // cout << endl;
    for (int i = 1; i < n; i++) {
        b[i] = max(b[i], b[i - 1]);
    }
    // for (auto i : b) {
    //     cout << i << " ";
    // }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += max(0, b[i] - a[i] - 1);
    }
    cout << res;
    return 0;
}