#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> a, b, c;
const int base = 1e+9 + 42;
const long long mod = base * (long long)base;

int main() {
    srand(time(NULL));
    int n = 1000;
    a = vector<vector<int>>(n, vector<int>(n, 0));
    b = vector<vector<int>>(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = rand() % base;
            b[i][j] = rand() % base;
        }
    }
    c = vector<vector<int>>(n, vector<int>(n, 0));

    {
        auto start = clock();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int r = 0;
                for (int k = 0; k < n; ++k) {
                    r = (r + (long long)a[i][k] * b[k][j]) % base;
                }
                c[i][j] = r;
            }
        }

        cerr << "with module: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                s = (s + c[i][j]) % base;
            }
        }
        cerr << s << endl;
    }

    {
        auto start = clock();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                long long r = 0;
                for (int k = 0; k < n; ++k) {
                    r += (long long)a[i][k] * b[k][j];
                    if (r >= mod) {
                        r -= mod;
                    }
                }
                c[i][j] = r % base;
            }
        }

        cerr << "without module: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                s = (s + c[i][j]) % base;
            }
        }
        cerr << s << endl;
    }

    {
        auto d = vector<vector<int>>(n, vector<int>(n, 0));
        auto start = clock();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                d[i][j] = b[j][i];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                long long r = 0;
                for (int k = 0; k < n; ++k) {
                    r += (long long)a[i][k] * d[j][k];
                    if (r >= mod) {
                        r -= mod;
                    }
                }
                c[i][j] = r % base;
            }
        }

        cerr << "with transpose: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
        int s = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                s = (s + c[i][j]) % base;
            }
        }
        cerr << s << endl;
    }
    return 0;
}
