#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int> > a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> cur(n);
    for (int i = 0; i < q; i++) {
        int pos;
        cin >> pos;
        vector<int> nw(n);
        for (int j = 0; j < n; j++) {
            cin >> nw[j];
        }
    }
    return 0;
}