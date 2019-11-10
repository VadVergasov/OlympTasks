#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int k, y = 0, multi = 1;
    string s;
    in >> k;
    in.ignore();
    getline(in, s);
    vector<vector<char> > table(k, vector<char>(s.size(), 0));
    for (int i = 0; i < s.size(); i++) {
        table[y][i] = s[i];
        y += multi;
        if (y == k - 1 || y == 0) {
            multi *= -1;
        }
    }
    string res = "";
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (table[i][j] != 0) {
                res += table[i][j];
            }
        }
    }
    out << res;
    return 0;
}