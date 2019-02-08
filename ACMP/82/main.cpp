#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, tmp;
    in >> n >> m;
    vector<int> a(100001, 0);
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a[tmp] = 1;
    }
    for (int i = 0; i < m; i++) {
        in >> tmp;
        if (a[tmp] == 1) {
            a[tmp] = 2;
        }
    }
    for (int i = 0; i < 100001; i++) {
        if (a[i] == 2) {
            out << i << " ";
        }
    }
    return 0;
}
