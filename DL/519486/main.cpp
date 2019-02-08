#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, m;
    in >> n >> m;
    vector<vector<char> > a(n);
    char tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> tmp;
            a[i].push_back(tmp);
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.') {
                for (int k = i + 1; k < n; k++) {
                    if (a[k][j] == '.') {
                        res++;
                    } else {
                        break;
                    }
                }
                for (int k = j + 1; k < m; k++) {
                    if (a[i][k] == '.') {
                        res++;
                    } else {
                        break;
                    }
                }
            }
        }
    }
    out << res;
    return 0;
}
