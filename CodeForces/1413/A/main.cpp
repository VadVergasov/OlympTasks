#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a) {
            cin >> i;
        }
        for (int i = 0; i < n / 2; i++) {
            int nok = a[i] * a[n - i - 1] / __gcd(a[i], a[n - i - 1]);
            b[i] = -(nok / a[i]);

            b[n - i - 1] = nok / a[n - i - 1];
        }
        for (auto i : b) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
