#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = 0;
    cin >> n;
    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> c[i];
    }
    for (int i = 0; i < n; i++) {
        int num = 0, to = a[i];
        while (i + num < n - 1 && c[i] < c[i + num + 1]) {
            num++;
            to += a[i + num];
        }
        res += to * c[i];
        i += num;
    }
    cout << res;
    return 0;
}