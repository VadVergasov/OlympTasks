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
        if (!used[a[v][i]]) {
            cur = dfs(a[v][i], cur + 1);
        }
    }
    return cur;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    a.resize(n);
    used.resize(n, false);
    while (!in.eof()) {
        int t1, t2;
        in >> t1;
        if (t1 == 0) {
            break;
        }
        in >> t2;
        a[t1 - 1].push_back(t2 - 1);
    }
    int num = dfs(k - 1, 0);
    if (num == n - 1) {
        out << "Yes";
    } else {
        out << "No";
    }
    return 0;
}