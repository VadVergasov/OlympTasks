#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    set<int> starts;
    for (int i = 0; i < m; i++) {
        int t;
        in >> t;
        starts.insert(t);
    }
    vector<vector<int> > g(n);
    for (int i = 0; i < n; i++) {
        int a;
        in >> a;
        a--;
        g[a].push_back(i);
    }
    int finish, res = 0;
    in >> finish;
    finish--;
    vector<bool> used(n, false);
    queue<pair<int, int> > q;
    q.push({finish, 0});
    used[finish] = true;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        if (cur.second >= k) {
            continue;
        }
        for (int i = 0; i < g[cur.first].size(); i++) {
            if (!used[g[cur.first][i]]) {
                if (starts.find(g[cur.first][i]) != starts.end()) {
                    res++;
                }
                used[g[cur.first][i]] = true;
                q.push({g[cur.first][i], cur.second++});
            }
        }
    }
    out << res;
    return 0;
}
