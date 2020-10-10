#include <bits/stdc++.h>

using namespace std;

struct s {
    set<int> h;
    int v;
    vector<int> l;
};

int main() {
    for (int t = 8; t < 11; t++) {
        ifstream in("input" + to_string(t) + ".txt");
        ofstream out("output" + to_string(t) + ".txt");
        int n, k;
        in >> t >> n >> k;
        vector<vector<int> > g(n);
        for (int i = 0; i < n * k; i++) {
            int a, b;
            in >> a >> b;
            a--;
            b--;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        set<vector<int> > all;
        queue<s> q;
        s start;
        start.v = 0;
        q.push(start);
        int i = 0;
        while (!q.empty()) {
            i++;
            s cur = q.front();
            q.pop();
            for (int i = 0; i < (int)g[cur.v].size(); i++) {
                if (cur.h.find(g[cur.v][i]) == cur.h.end()) {
                    s next;
                    next.v = g[cur.v][i];
                    next.h = cur.h;
                    next.l = cur.l;
                    next.l.push_back(cur.v);
                    next.h.insert(cur.v);
                    q.push(next);
                } else if (g[cur.v][i] == cur.l.front() && cur.l.size() > 2) {
                    vector<int> res = cur.l;
                    res.push_back(cur.v);
                    all.insert(res);
                }
            }
            if (all.size() != 0) {
                break;
            }
        }
        cout << "Printing\n";
        out << "1\n" << all.rbegin()->size() << "\n";
        for (auto i : *all.rbegin()) {
            out << i << " ";
        }
    }
    return 0;
}