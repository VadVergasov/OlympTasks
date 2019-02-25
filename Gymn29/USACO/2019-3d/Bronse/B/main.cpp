#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("revegetate.in");
    ofstream out("revegetate.out");
    int n, m;
    in >> n >> m;
    vector<vector<int> > g(n);
    int a, b;
    vector<vector<int> > u(n, vector<int>(4, 0));
    for (int i = 0; i < m; i++) {
        in >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (!u[i][j]) {
                out << j + 1;
                for (int r = 0; r < g[i].size(); r++) {
                    u[g[i][r]][j] = 1;
                }
                break;
            }
        }
    }
    return 0;
}