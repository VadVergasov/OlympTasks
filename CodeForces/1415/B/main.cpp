#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (auto &i : c) {
            cin >> i;
        }
        int res = 1e9;
        for (int i = 1; i <= 100; i++) {
            int cur = 0;
            for (int j = 0; j < n; j++) {
                if (c[j] != i) {
                    cur++;
                    j += k;
                    j--;
                }
            }
            res = min(res, cur);
        }
        cout << res << "\n";
    }
    return 0;
}
