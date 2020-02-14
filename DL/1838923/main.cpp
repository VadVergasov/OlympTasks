#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> w >> h;
    vector<vector<char> > a(h + 2, vector<char>(w + 2, '*'));
    vector<vector<bool> > used(h + 2, vector<bool>(w + 2, false));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> a[i][j];
        }
    }
    vector<pair<int, int> > d = {{1, 0}, {-1, 0}, {0, 1},  {0, -1},
                                 {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
    int res = 0;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (!used[i][j] && a[i][j] == '.') {
                queue<pair<int, int> > q;
                q.push({i, j});
                int r = 0;
                while (!q.empty()) {
                    pair<int, int> now = q.front();
                    for (auto k : d) {
                        if (now.first + k.first > 0 &&
                            now.first + k.first <= h &&
                            now.second + k.second > 0 &&
                            now.second + k.second <= w &&
                            !used[now.first + k.first][now.second + k.second] &&
                            a[now.first + k.first][now.second + k.second] ==
                                '.') {
                            used[now.first + k.first][now.second + k.second] =
                                true;
                            q.push(
                                {now.first + k.first, now.second + k.second});
                        }
                    }
                    r++;
                    q.pop();
                }
                if (r == 1) {
                    r++;
                }
                res = max(res, r - 1);
            }
        }
    }
    cout << res;
    return 0;
}