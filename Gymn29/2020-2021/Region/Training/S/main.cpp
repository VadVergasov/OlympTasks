#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    map<string, int> a;
    a["black knight"] = 0;
    a["black pawn"] = 0;
    a["black king"] = 0;
    a["black queen"] = 0;
    a["black rook"] = 0;
    a["black bishop"] = 0;
    a["white queen"] = 0;
    a["white pawn"] = 0;
    a["white rook"] = 0;
    a["white king"] = 0;
    a["white bishop"] = 0;
    a["white knight"] = 0;
    string s;
    in.ignore();
    for (int i = 0; i < n; i++) {
        getline(in, s);
        a[s]++;
    }
    int mn = 10e6;
    for (auto const& i : a) {
        if (i.first.find("pawn") != -1) {
            mn = min(mn, i.second / 8);
        } else if (i.first.find("rook") != -1) {
            mn = min(mn, i.second / 2);
        } else if (i.first.find("bishop") != -1) {
            mn = min(mn, i.second / 2);
        } else if (i.first.find("knight") != -1) {
            mn = min(mn, i.second / 2);
        } else {
            mn = min(mn, i.second);
        }
    }
    out << mn;
    return 0;
}
