#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &j : a) {
            cin >> j;
        }
        long long sum = 0, xr = 0;
        for (auto j : a) {
            sum += j;
            xr ^= j;
        }
        if (sum == 2 * xr) {
            cout << "0\n";
            continue;
        }
        cout << "2\n";
        cout << xr << " " << xr + sum << "\n";
    }
    return 0;
}