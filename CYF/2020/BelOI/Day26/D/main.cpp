#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int q = 0; q < 11; q++) {
        ifstream in("input" + to_string(q) + ".txt");
        ofstream out("output" + to_string(q) + ".txt");
        int r, c, t;
        in >> r >> c >> t;
        vector<vector<char> > a(4 * r + 1, vector<char>(2 * c + 5));
        pair<int, int> s;
        for (int i = 0; i < 4 * r + 1; i++) {
            for (int j = 0; j < 2 * c + 5; j++) {
                cin >> a[i][j];
                if (a[i][j] == 'B') {
                    s = {i, j};
                }
            }
        }
    }
    return 0;
}