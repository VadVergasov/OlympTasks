#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 2) {
        cout << 1;
        return 0;
    }
    if (n == 2) {
        cout << 2;
        return 0;
    }
    vector<long long> a;
    a.resize(n);
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i < n; i++) {
        a[i] = a[i - 3] + a[i - 1] + 2;
    }
    cout << a[a.size() - 1];
    return 0;
}
