#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int r, c, h, v, count = 0;
        cin >> r >> c >> h >> v;
        vector<vector<char> > a(r, vector<char>(c));
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                cin >> a[j][k];
                if (a[j][k] == '@') {
                    count++;
                }
            }
        }
        if (count % ((h + 1) * (v + 1)) != 0) {
            cout << "Case #" << i + 1 << " IMPOSSIBLE\n";
        }
    }
    return 0;
}