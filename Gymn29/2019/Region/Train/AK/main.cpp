#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, res = 0;
    in >> n;
    vector<string> s, r;
    s.resize(n);
    for (int i = 0; i < n; i++) {
        in >> s[i];
    }
    for (int i = 0; i < n; i++) {
        bool a = true;
        string t = "";
        for (int j = s[i].size() - 1; j >= 0; j--) {
            if (s[i][j] == 'H') {
                t += 'H';
            } else if (s[i][j] == 'I') {
                t += 'I';
            } else if (s[i][j] == 'N') {
                t += 'N';
            } else if (s[i][j] == 'O') {
                t += 'O';
            } else if (s[i][j] == 'S') {
                t += 'S';
            } else if (s[i][j] == 'X') {
                t += 'X';
            } else if (s[i][j] == 'Z') {
                t += 'Z';
            } else if (s[i][j] == '0') {
                t += '0';
            } else if (s[i][j] == 'M') {
                t += 'W';
            } else if (s[i][j] == '6') {
                t += '9';
            } else if (s[i][j] == 'W') {
                t += 'M';
            } else if (s[i][j] == '9') {
                t += '6';
            } else {
                a = false;
                break;
            }
        }
        if (a) {
            r.push_back(t);
            res++;
        }
    }
    out << res << "\n";
    for (int i = 0; i < res; i++) {
        out << r[i] << "\n";
    }
    return 0;
}