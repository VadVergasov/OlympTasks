#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<pair<int, int> > a(m);
    for (int i = 0; i < m; i++) {
        in >> a[i].first << a[i].second;
    }
    return 0;
}
