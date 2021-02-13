#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)), b(m, vector<int>(n));
        for (auto &i : a) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        for (auto &i : b) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        vector<int> order(n, -1);
        int stolb = -1;
        for (int i = 0; i < n && stolb == -1; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == b[0][0]) {
                    stolb = j;
                    break;
                }
            }
        }
        int cur = 0;
        while (cur < n) {
            for (int i = 0; i < n; i++) {
                if (a[i][stolb] == b[0][cur]) {
                    order[cur] = i;
                    break;
                }
            }
            cur++;
        }
        for (auto i : order) {
            for (auto j : a[i]) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
