#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        bool f = false;
        for (int j = 1; j < n; j++) {
            if (abs(a[j] - a[j - 1]) > 1) {
                cout << "YES\n" << j << " " << j + 1 << "\n";
                f = true;
                break;
            }
        }
        if (!f) {
            cout << "NO\n";
        }
    }
    return 0;
}