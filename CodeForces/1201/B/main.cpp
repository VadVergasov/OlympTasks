#include <bits/stdc++.h>

using namespace std;

int main() {
    long long sum = 0;
    int n, mx = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        sum += a[i];
    }
    if (sum % 2 != 0 || mx > sum / 2) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}