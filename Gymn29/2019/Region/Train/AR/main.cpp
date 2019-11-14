#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n;
    in >> n;
    vector<vector<char> > t(9, vector<char>(9));
    vector<vector<vector<char> > > a(n,
                                     vector<vector<char> >(9, vector<char>(9)));
    in.ignore();
    for (int i = 0; i < 9; i++) {
        string s;
        getline(in, s);
        for (int j = 0; j < 9; j++) {
            t[i][j] = s[j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                in >> a[i][j][k];
            }
        }
    }
    for (int k = 0; k < n; k++) {
        bool res = true;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (t[i][j] == '*' || t[i][j] == ' ' || t[i][j] == a[k][i][j]) {
                    continue;
                } else {
                    out << "N";
                    res = false;
                    break;
                }
            }
            if (!res) {
                break;
            }
        }
        if (!res) {
            continue;
        }
        for (int i = 0; i < 9; i++) {
            set<char> v, g;
            for (int j = 0; j < 9; j++) {
                if ((v.find(a[k][i][j]) != v.end()) ||
                    (g.find(a[k][j][i]) != g.end())) {
                    out << "N";
                    res = false;
                    break;
                }
                v.insert(a[k][i][j]);
                g.insert(a[k][j][i]);
            }
            if (!res) {
                break;
            }
        }
        if (!res) {
            continue;
        }
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                set<char> s;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (s.find(a[k][x * 3 + i][y * 3 + j]) != s.end()) {
                            out << "N";
                            res = false;
                            break;
                        }
                        s.insert(a[k][x * 3 + i][y * 3 + j]);
                    }
                    if (!res) {
                        break;
                    }
                }
                if (!res) {
                    break;
                }
            }
            if (!res) {
                break;
            }
        }
        if (!res) {
            continue;
        }
        out << "Y";
    }
    return 0;
}
