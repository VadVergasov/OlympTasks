// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
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