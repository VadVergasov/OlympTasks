#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m = 0;
    in >> n;
    vector<vector<int> > a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            in >> a[i][j];
            if (a[i][j] == 1) {
                m++;
            }
        }
    }
    out << n << " " << m << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                out << i + 1 << " " << j + 1 << "\n";
            }
        }
    }
    return 0;
}