#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    int n, m, tmp;
    cin >> n >> m;
    vector<int> a, b;
    vector<vector<int> > c;
    c.resize(m, {});
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        c[i].resize(n, 0);
        b.push_back(tmp);
    }
    cin >> x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[j][i] = a[i] * b[j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << c[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
