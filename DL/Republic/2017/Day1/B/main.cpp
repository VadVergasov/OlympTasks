#include <bits/stdc++.h>

using namespace std;

struct e {
    int v;
    set<int> history;

    e(int a) { v = a; }
};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, s;
    in >> n >> m >> s;
    s--;
    vector<vector<int> > g(n);
    for (int i = 0; i < m; i++) {
        int x, y;
        in >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    queue<e> q;
    e start = e(s);
    q.push(start);
    long long res = 0;
    while (!q.empty()) {
        e cur = q.front();
        q.pop();
        bool was = false;
        for (int i = 0; i < (int)g[cur.v].size(); i++) {
            if (cur.history.find(g[cur.v][i]) == cur.history.end()) {
                e next = e(g[cur.v][i]);
                next.history = cur.history;
                next.history.insert(cur.v);
                q.push(next);
                was = true;
            }
        }
        if (!was) {
            res++;
        }
    }
    out << res;
    return 0;
}