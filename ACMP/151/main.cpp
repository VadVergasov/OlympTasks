#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > a;
vector<bool> used;
vector<char> color;

void dfs(int v, int c) {
    if (used[v]) {
        return;
    }
    used[v] = true;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    used.resize(n, false);
    color.resize(n, 2);
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int t1, t2;
        in >> t1 >> t2;
        a[t1 - 1].push_back(t2 - 1);
        a[t2 - 1].push_back(t1 - 1);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            res++;
            dfs(i, 0);
        }
    }
    if (res > 2) {
        out << "NO";
    } else {
        out << "YES";
    }
    return 0;
}