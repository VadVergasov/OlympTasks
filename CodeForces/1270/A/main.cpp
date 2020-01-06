#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        bool res = false;
        vector<int> f(k1), s(k2);
        for (int j = 0; j < k1; j++) {
            cin >> f[j];
            if (f[j] == n) {
                res = true;
            }
        }
        for (int j = 0; j < k2; j++) {
            cin >> s[j];
        }
        if (res) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}