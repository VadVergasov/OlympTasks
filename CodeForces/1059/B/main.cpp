#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, resh = 0, eight = 0;
    cin >> n >> m;
    vector<vector<char> > a(n, vector<char>(m)), b(n, vector<char>(m)),
        c(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                resh++;
            }
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            int r = 0;
            if (a[i - 1][j] == '#') {
                r++;
            }
            if (a[i - 1][j - 1] == '#') {
                r++;
            }
            if (a[i - 1][j + 1] == '#') {
                r++;
            }
            if (a[i + 1][j] == '#') {
                r++;
            }
            if (a[i + 1][j + 1] == '#') {
                r++;
            }
            if (a[i + 1][j - 1] == '#') {
                r++;
            }
            if (a[i][j + 1] == '#') {
                r++;
            }
            if (a[i][j - 1] == '#') {
                r++;
            }
            b[i][j] = r + '0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i][j] == '8') {
                c[i - 1][j] = '#';
                c[i - 1][j - 1] = '#';
                c[i - 1][j + 1] = '#';
                c[i][j - 1] = '#';
                c[i + 1][j - 1] = '#';
                c[i + 1][j + 1] = '#';
                c[i + 1][j] = '#';
                c[i][j + 1] = '#';
            }
        }
    }
    bool res = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != c[i][j]) {
                res = false;
                break;
            }
        }
        if (!res) {
            break;
        }
    }
    if (!res) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
