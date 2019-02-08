#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char tmp;
    cin >> n;
    vector<vector<char> > a, b, c;
    vector<char> t;
    t.resize(n + 2, '.');
    a.resize(n + 2, t);
    b.resize(n + 2, t);
    c.resize(n + 2, t);
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cin >> tmp;
            a[i][j] = tmp;
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cin >> tmp;
            b[i][j] = tmp;
        }
    }
    bool bo = false;
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (b[i][j] == 'x') {
                if (a[i][j] == '.') {
                    int k = 0;
                    if (a[i][j + 1] == '*') {
                        k++;
                    }
                    if (a[i][j - 1] == '*') {
                        k++;
                    }
                    if (a[i + 1][j + 1] == '*') {
                        k++;
                    }
                    if (a[i - 1][j + 1] == '*') {
                        k++;
                    }
                    if (a[i + 1][j - 1] == '*') {
                        k++;
                    }
                    if (a[i + 1][j] == '*') {
                        k++;
                    }
                    if (a[i - 1][j - 1] == '*') {
                        k++;
                    }
                    if (a[i - 1][j] == '*') {
                        k++;
                    }
                    c[i][j] = (k + '0');
                }
                if (a[i][j] == '*') {
                    bo = true;
                }
            }
        }
    }
    if (bo) {
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (a[i][j] == '*') {
                    c[i][j] = '*';
                }
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cout << c[i][j];
        }
        cout << "\n";
    }
    return 0;
}
