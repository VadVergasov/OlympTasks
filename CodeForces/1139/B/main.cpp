#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long res = 0, cur = 2e9;
    for (int i = n - 1; i >= 0; i--) {
        cur = max((long long)0, min(cur - 1, (long long)a[i]));
        res += cur;
    }
    cout << res;
    return 0;
}