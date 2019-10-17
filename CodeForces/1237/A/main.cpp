#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool f = false;
    for (int i = 0; i < n; i++) {
        if (s > 0) {
            cout << floor(a[i] / 2.0) << "\n";
            s += floor(a[i] / 2.0);
        } else if (s < 0) {
            cout << ceil(a[i] / 2.0) << "\n";
            s += ceil(a[i] / 2.0);
        } else {
            cout << round(a[i] / 2.0) << "\n";
            s += round(a[i] / 2.0);
        }
    }
    return 0;
}