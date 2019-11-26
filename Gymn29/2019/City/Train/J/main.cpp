#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    for (int i = 0; i < m; i++) {
        in >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int i = 0;
    long long res = 0;
    while (a[i] < b[i] && i < min(n, m)) {
        res += b[i] - a[i];
        i++;
    }
    out << res;
    return 0;
}