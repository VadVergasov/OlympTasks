#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > a;
vector<bool> used;

void dfs(int v) {
    if (used[v]) {
        return;
    }
    used[v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        if (!used[i] && a[v][i] == 1) {
            dfs(i);
        }
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m = 0;
    in >> n;
    a.resize(n, vector<int>(n));
    used.resize(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
            if (a[i][j] == 1) {
                m++;
            }
        }
    }
    int comp = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            comp++;
            dfs(i);
        }
    }
    if (comp == 1 && m / 2 == n - 1) {
        out << "YES";
    } else {
        out << "NO";
    }
    return 0;
}