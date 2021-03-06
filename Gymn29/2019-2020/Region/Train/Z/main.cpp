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
    int k = 0;
    in >> k;
    in.ignore();
    string s;
    getline(in, s);
    vector<string> a(ceil((double)s.size() / (double)k), "");
    for (int i = 0; i < a.size(); i++) {
        for (int j = i * k;
             j < min(k * (i + 1), (int)(k * i + s.size() - k * i)); j++) {
            a[i] += s[j];
        }
    }
    for (int i = 0; i < a.size(); i++) {
        reverse(a[i].begin(), a[i].end());
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            out << a[i][j];
        }
    }
    return 0;
}