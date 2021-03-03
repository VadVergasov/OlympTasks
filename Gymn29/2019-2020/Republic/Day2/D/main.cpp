"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
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