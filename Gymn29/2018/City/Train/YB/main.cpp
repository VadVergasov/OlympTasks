#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<vector<int> > b(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> b[j][i];
        }
    }
    out << m << " " << n << "\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            out << b[i][j] << " ";
        }
        out << "\n";
    }
    return 0;
}
