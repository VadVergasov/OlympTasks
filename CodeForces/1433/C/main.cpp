#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            if (mx < a[i]) {
                mx = a[i];
            }
        }
        bool f = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == mx && ((i - 1 >= 0 && a[i - 1] < a[i]) ||
                               (i + 1 < n && a[i + 1] < a[i]))) {
                cout << i + 1 << "\n";
                f = true;
                break;
            }
        }
        if (!f) {
            cout << "-1\n";
        }
    }
    return 0;
}
