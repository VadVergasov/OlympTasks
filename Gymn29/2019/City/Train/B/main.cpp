#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int m, w;
    in >> m >> w;
    vector<int> n(m);
    for (int i = 0; i < m; i++) {
        in >> n[i];
    }
    int s, b, t;
    in >> s >> b >> t;
    return 0;
}