#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("video.in");
    ofstream out("video.out");
    in.tie(0);
    out.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, res = 0;
    in >> n >> m;
    vector<vector<char> > a(n, vector<char>(m)), b;
    vector<char> last;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> a[i][j];
        }
    }
    b = a;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int z = 0; z < i; z++) {
                last = b[0];
                for (int k = 1; k < n; k++) {
                    swap(b[k], last);
                }
                b[0] = last;
            }
            for (int z = 0; z < j; z++) {
                last.clear();
                for (int k = 0; k < n; k++) {
                    last.push_back(b[k][0]);
                }
                for (int k = 1; k < m; k++) {
                    for (int q = 0; q < n; q++) {
                        swap(b[q][k], last[q]);
                    }
                }
                for (int k = 0; k < n; k++) {
                    swap(b[k][0], last[k]);
                }
            }
            int cur = 0;
            for (int k = 0; k < n - 1; k++) {
                for (int z = 0; z < m - 1; z++) {
                    if (b[k][z] == b[k + 1][z] && b[k][z] == b[k][z + 1] &&
                        b[k][z] == b[k + 1][z + 1]) {
                        cur++;
                    }
                }
            }
            res = max(res, cur);
            b = a;
        }
    }
    out << res;
    return 0;
}