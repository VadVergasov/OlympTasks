// https://codeforces.com/problemset/problem/793/B
#include <bits/stdc++.h>

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    pair<int, int> start, end;
    vector<pair<int, int> > d = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<char> > a(n + 2, vector<char>(m + 2, '*'));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'S') {
                start = {i, j};
            }
            if (a[i][j] == 'T') {
                end = {i, j};
            }
        }
    }
    queue<pair<pair<int, int>, pair<int, int> > > q;
    q.push({start, {0, 0}});
    while (!q.empty()) {
        pair<pair<int, int>, pair<int, int> > cur = q.front();
        q.pop();
        if (cur.second.second > 2) {
            continue;
        }
        if (cur.first == end) {
            cout << "YES";
            return 0;
        }
        for (auto [f, s] : d) {
            if (a[cur.first.first + f][cur.first.second + s] == '*') {
                continue;
            }
            int dir = 0, count = cur.second.second;
            if (f == 1 && s == 0 && cur.second.first != 1 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == -1 && s == 0 && cur.second.first != 3 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == 0 && s == 1 && cur.second.first != 2 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == 0 && s == -1 && cur.second.first != 4 &&
                cur.second.first != 0) {
                count++;
            }
            if (f == 1 && s == 0) {
                dir = 1;
            }
            if (f == -1 && s == 0) {
                dir = 3;
            }
            if (f == 0 && s == 1) {
                dir = 2;
            }
            if (f == 0 && s == -1) {
                dir = 4;
            }
            if (dir == 3 && cur.second.first == 1 ||
                cur.second.first == 3 && dir == 1) {
                continue;
            }
            if (dir == 2 && cur.second.first == 4 ||
                dir == 4 && cur.second.first == 2) {
                continue;
            }
            if (count > 2) {
                continue;
            }
            q.push({{cur.first.first + f, cur.first.second + s}, {dir, count}});
        }
    }
    cout << "NO";
    return 0;
}