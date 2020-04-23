// https://codeforces.com/contest/1335/problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int> > all(n, vector<int>(30, 0));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i != 0) {
                all[i] = all[i - 1];
            }
            all[i][a[i]]++;
        }
        int mx = 1;
        for (int i = -1; i < 27; i++) {
            for (int j = -1; j < 27; j++) {
                for (int l = 0; l < n; l++) {
                    int right = n - 1;
                    while (i != -1 && right >= 0 &&
                           all[n - 1][i + 1] - all[right][i + 1] !=
                               all[l][i + 1]) {
                        right--;
                    }
                    if (right < l) {
                        continue;
                    }
                    mx = max(mx, all[l][i + 1] * 2 +
                                     (all[right][j + 1] - all[l][j + 1]));
                }
            }
        }
        cout << mx << "\n";
    }
    return 0;
}