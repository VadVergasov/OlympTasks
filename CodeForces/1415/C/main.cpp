#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p, k;
        cin >> n >> p >> k;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        vector<int> b(k);
        for (int i = p - 1; i < n; i++) {
            for (int j = i; j < n; j += k) {
                if (a[j]) {
                    b[(j + 1 - p) % k]++;
                }
            }
        }
    }
    return 0;
}
