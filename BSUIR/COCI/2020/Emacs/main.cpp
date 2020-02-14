#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char> > a(n + 2, vector<char>(m + 2, '.'));
    vector<vector<bool> > used(n + 2, vector<bool>(m + 2));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    long long res = 0;
    vector<pair<int, int> > d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!used[i][j] && a[i][j] == '*') {
                queue<pair<int, int> > q;
                q.push({i, j});
                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    for (auto k : d) {
                        if (cur.first + k.first > 0 &&
                            cur.first + k.first <= n &&
                            cur.second + k.second > 0 &&
                            cur.second + k.second <= m &&
                            a[cur.first + k.first][cur.second + k.second] ==
                                '*' &&
                            !used[cur.first + k.first][cur.second + k.second]) {
                            used[cur.first + k.first][cur.second + k.second] =
                                true;
                            q.push(
                                {cur.first + k.first, cur.second + k.second});
                        }
                    }
                    q.pop();
                }
                res++;
            }
        }
    }
    cout << res;
    return 0;
}