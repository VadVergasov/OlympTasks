#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, d, res = 100;
        cin >> n >> k >> d;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int j = 0; j <= n - d; j++) {
            int count = 0;
            set<int> s;
            for (int k = 0; k < d; k++) {
                if (s.find(a[j + k]) == s.end()) {
                    s.insert(a[j + k]);
                    count++;
                }
            }
            res = min(res, count);
        }
        cout << res << "\n";
    }
    return 0;
}