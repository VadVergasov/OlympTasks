#include <bits/stdc++.h>

using namespace std;

struct st {
    int v;
    vector<int> path;
    string h;
    vector<bool> used;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, char> > > g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        char c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++) {
        queue<st> q;
        st start;
        start.v = i;
        start.h = "";
        start.used.resize(n, false);
        start.used[i] = true;
        start.path.push_back(i);
        q.push(start);
        while (!q.empty()) {
            st cur = q.front();
            q.pop();
            if (cur.h.size() != 0 && cur.h.size() % 2 == 0) {
                if (cur.h.substr(0, cur.h.size() / 2) ==
                    cur.h.substr(cur.h.size() / 2, cur.h.size() / 2)) {
                    cout << cur.path.size() << "\n";
                    for (auto i : cur.path) {
                        cout << i + 1 << " ";
                    }
                    return 0;
                }
            }
            for (int i = 0; i < (int)g[cur.v].size(); i++) {
                if (!cur.used[g[cur.v][i].first]) {
                    st next;
                    next.v = g[cur.v][i].first;
                    next.h = cur.h;
                    next.h += g[cur.v][i].second;
                    next.used = cur.used;
                    next.used[next.v] = true;
                    next.path = cur.path;
                    next.path.push_back(next.v);
                    q.push(next);
                }
            }
        }
    }
    cout << -1;
    return 0;
}
