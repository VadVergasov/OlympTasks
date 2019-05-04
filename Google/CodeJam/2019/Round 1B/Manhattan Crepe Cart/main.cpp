#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int p, q;
        cin >> p >> q;
        q++;
        vector<vector<int> > field(q, vector<int>(q, 0));
        for (int j = 0; j < p; j++) {
            int x, y;
            char d;
            cin >> x >> y >> d;
            if (d == 'W') {
                for (int k = 0; k < x; k++) {
                    for (int z = 0; z < q; z++) {
                        field[z][k]++;
                    }
                }
            } else if (d == 'E') {
                for (int k = x + 1; k < q; k++) {
                    for (int z = 0; z < q; z++) {
                        field[z][k]++;
                    }
                }
            } else if (d == 'S') {
                for (int k = 0; k < q; k++) {
                    for (int z = 0; z < y; z++) {
                        field[z][k]++;
                    }
                }
            } else {
                for (int k = 0; k < q; k++) {
                    for (int z = y + 1; z < q; z++) {
                        field[z][k]++;
                    }
                }
            }
        }
        int mx = 0;
        for (int k = 0; k < q; k++) {
            for (int z = 0; z < q; z++) {
                mx = max(mx, field[k][z]);
            }
        }
        bool f = true;
        for (int k = 0; k < q && f; k++) {
            for (int z = 0; z < q && f; z++) {
                if (mx == field[k][z]) {
                    cout << "Case #" << i + 1 << ": " << z << " " << k << "\n";
                    f = false;
                }
            }
        }
    }
    return 0;
}