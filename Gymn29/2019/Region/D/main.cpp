#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> m >> n;
    swap(m, n);
    vector<pair<int, pair<int, int> > > all(m * n,
                                            make_pair(-1, make_pair(-1, -1)));
    vector<vector<int> > a(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            a[i][j] *= 10;
        }
    }
    long long cur = 0;
    pair<int, int> pos = make_pair(-1, -1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            long long num = a[i][j] + a[i - 1][j] / 2 + a[i + 1][j] / 2 +
                            a[i][j - 1] / 2 + a[i][j + 1] / 2 +
                            a[i - 1][j - 1] / 2 + a[i - 1][j + 1] / 2 +
                            a[i + 1][j - 1] / 2 + a[i + 1][j + 1] / 2;
            all[cur] = make_pair(num, make_pair(i, j));
            cur++;
        }
    }
    sort(all.rbegin(), all.rend());
    int i = 0, res = -1;
    while (all[i].first == all[0].first) {
        for (int j = 0; j < min(27, (int)all.size()); j++) {
            if (j == i ||
                abs(all[j].second.first - all[i].second.first) < 3 &&
                    abs(all[j].second.second - all[i].second.second) < 3) {
                continue;
            }
            res = max(res, all[j].first);
        }
        i++;
    }
    cout << ((double)(all[0].first) + (double)(res)) / 10.0;
    return 0;
}