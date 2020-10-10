#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mx = 0, mn = 10e9;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    vector<int> res;
    for (int i = 0; i < n; i++) {
        if (a[i] != mx && a[i] != mn) {
            res.push_back(i + 1);
        }
    }
    cout << res.size() << "\n";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}