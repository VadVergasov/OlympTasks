#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n;
        cin >> n;
        vector<vector<int> > a(n, vector<int>(n));
        int sum = 0, r = 0, c = 0;
        for (auto &i : a) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        for (int i = 0; i < n; i++) {
            sum += a[i][i];
        }
        for (int i = 0; i < n; i++) {
            set<int> all;
            bool res = false;
            for (int j = 0; j < n; j++) {
                if (all.find(a[i][j]) != all.end()) {
                    res = true;
                    break;
                }
                all.insert(a[i][j]);
            }
            if (res) {
                r++;
            }
        }
        for (int i = 0; i < n; i++) {
            set<int> all;
            bool res = false;
            for (int j = 0; j < n; j++) {
                if (all.find(a[j][i]) != all.end()) {
                    res = true;
                    break;
                }
                all.insert(a[j][i]);
            }
            if (res) {
                c++;
            }
        }
        cout << "Case #" << cur + 1 << ": " << sum << " " << r << " " << c
             << "\n";
    }
    return 0;
}