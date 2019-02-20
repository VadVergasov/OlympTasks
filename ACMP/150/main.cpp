#include <bits/stdc++.h>

using namespace std;

vector<bool> used;
vector<vector<int> > a;

int dfs(int v, int cur) {
    if (used[v]) {
        return cur;
    }
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[i] && a[v][i] == 1) {
            cur = dfs(i, cur + 1);
        }
    }
    return cur;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, s;
    in >> n >> s;
    a.resize(n, vector<int>(n));
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
        }
    }
    out << dfs(s - 1, 0);
    return 0;
}