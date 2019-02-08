#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, s;
    in >> n >> m >> k >> s;
    vector<vector<char> > a(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> a[i][j];
        }
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int u = 1; u < s; u++) {
                if (s % u != 0) {
                    continue;
                }
                long long cnt = 0;
                for (int c = 0; c < u; c++) {
                    if (i + c + 1 >= n || cnt == 10e10) {
                        cnt = 10e10;
                        break;
                    }
                    if (j + s / (c + 1) >= m) {
                        continue;
                    }
                    for (int v = 0; v < s / u; v++) {
                        if (j + v + 1 >= m) {
                            cnt = 10e10;
                            break;
                        }
                        if (a[i + c][j + v] == '#') {
                            cnt++;
                        }
                        cout << a[i + c][j + v] << " "
                             << (a[i + c][j + v] == '#') << " " << cnt << " ";
                    }
                    cout << endl;
                }
                if (cnt == 10e10) {
                    continue;
                }
                if (cnt <= k) {
                    res++;
                    cout << i << " " << j << " " << cnt << endl;
                }
            }
        }
    }
    cout << res;
    return 0;
}
