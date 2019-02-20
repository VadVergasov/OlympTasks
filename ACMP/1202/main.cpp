#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<vector<int> > a(n);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        in >> t1 >> t2;
        a[t1 - 1].push_back(t2 - 1);
    }
    out << n << "\n";
    for (int i = 0; i < n; i++) {
        out << a[i].size();
        if (a[i].size() != 0) {
            out << " ";
        }
        for (int j = 0; j < (int)a[i].size() - 1; j++) {
            out << a[i][j] + 1 << " ";
        }
        if (a[i].size() != 0) {
            out << a[i].back() + 1;
        }
        out << "\n";
    }
    return 0;
}