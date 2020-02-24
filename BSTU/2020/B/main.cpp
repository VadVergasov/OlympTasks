#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, xr = 0, num = 0, q;
    cin >> n >> q;
    num = n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        xr ^= t;
    }
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t != 3) {
            int x;
            cin >> x;
            if (t == 2) {
                num++;
                xr ^= x;
            } else {
                xr ^= x;
                num--;
            }
        } else {
            if (xr == 0) {
                cout << num << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}