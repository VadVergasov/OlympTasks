#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char> > a(n, vector<char>(n));
        for (auto &i : a) {
            for (auto &j : i) {
                cin >> j;
            }
        }
        vector<vector<int> > b(n + 4, vector<int>(n + 4));
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 'X') {
                    if ((a[i + 1][j] == 'X' && a[i + 2][j] == 'X')) {
                        b[i + 2][j + 2]++;
                        b[i + 3][j + 2]++;
                        b[i + 4][j + 2]++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 2; j++) {
                if (a[i][j] == 'X') {
                    if ((a[i][j + 1] == 'X' && a[i][j + 2] == 'X')) {
                        b[i + 2][j + 2]++;
                        b[i + 2][j + 3]++;
                        b[i + 2][j + 4]++;
                    }
                }
            }
        }
        for (auto i : b) {
            for (auto j : i) {
                cout << j;
            }
            cout << "\n";
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 2; j++) {
                if (a[i][j] == 'X') {
                    if ((a[i][j + 1] == 'X' && a[i][j + 2] == 'X')) {
                        int mx = max({b[i + 2][j + 2], b[i + 2][j + 3],
                                      b[i + 2][j + 4]});
                        if (b[i + 2][j + 2] == mx) {
                            a[i][j] = 'O';
                            for (int k = -2; k < 3; k++) {
                                b[i + 2][j + 2 + k]--;
                            }
                        } else if (b[i + 2][j + 3] == mx) {
                            a[i][j + 1] = 'O';
                            for (int k = -2; k < 3; k++) {
                                b[i + 2][j + 3 + k]--;
                            }
                        } else {
                            a[i][j + 2] = 'O';
                            for (int k = -2; k < 3; k++) {
                                b[i + 2][j + 4 + k]--;
                            }
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 'X') {
                    if ((a[i + 1][j] == 'X' && a[i + 2][j] == 'X')) {
                        int mx = max({b[i + 2][j + 2], b[i + 3][j + 2],
                                      b[i + 4][j + 2]});
                        if (b[i + 2][j + 2] == mx) {
                            a[i][j] = 'O';
                            for (int k = -2; k < 3; k++) {
                                b[i + 2 + k][j + 2]--;
                            }
                        } else if (b[i + 3][j + 2] == mx) {
                            a[i + 1][j] = 'O';
                            for (int k = -2; k < 3; k++) {
                                b[i + 3 + k][j + 2]--;
                            }
                        } else {
                            a[i + 2][j] = 'O';
                            for (int k = -2; k < 3; k++) {
                                b[i + 4 + k][j + 2]--;
                            }
                        }
                    }
                }
            }
        }
        for (auto i : a) {
            for (auto j : i) {
                cout << j;
            }
            cout << "\n";
        }
    }
    return 0;
}
