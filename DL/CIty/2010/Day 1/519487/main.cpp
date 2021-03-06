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

void split(const string& str, vector<string>& cont, char delim = ', ') {
    stringstream ss(str);
    string token;
    while (getline(ss, token, delim)) {
        cont.push_back(token);
    }
}

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    string a, b;
    vector<string> ra, rb;
    getline(in, a);
    getline(in, b);
    if (a.size() == 2 && b.size() == 2) {
        out << "[]";
        return 0;
    }
    split(a, ra);
    split(b, rb);
    ra[0].erase(0, 1);
    ra[ra.size() - 1].erase(ra[ra.size() - 1].size() - 1, 1);
    rb[0].erase(0, 1);
    rb[rb.size() - 1].erase(rb[rb.size() - 1].size() - 1, 1);
    set<int> num;
    for (int i = 0; i < ra.size(); i++) {
        if (!(ra[i][0] >= '0' && ra[i][0] <= '9')) {
            break;
        }
        if (ra[i].find("..") == -1) {
            num.insert(stoi(ra[i]));
        } else {
            int pos = ra[i].find("..");
            int f = stoi(ra[i].substr(0, pos)),
                s = stoi(ra[i].substr(pos + 2, ra[i].size() - pos - 2));
            for (int j = f; j <= s; j++) {
                num.insert(j);
            }
        }
    }
    for (int i = 0; i < rb.size(); i++) {
        if (!(rb[i][0] >= '0' && rb[i][0] <= '9')) {
            break;
        }
        if (rb[i].find("..") == -1) {
            num.insert(stoi(rb[i]));
        } else {
            int pos = rb[i].find("..");
            int f = stoi(rb[i].substr(0, pos)),
                s = stoi(rb[i].substr(pos + 2, rb[i].size() - pos - 2));
            for (int j = f; j <= s; j++) {
                num.insert(j);
            }
        }
    }
    string res = "[";
    vector<int> tmp;
    for (set<int>::iterator i = num.begin(); i != num.end(); i++) {
        if (*i + 1 == *next(i, 1)) {
            tmp.push_back(*i);
        } else {
            if (tmp.size() == 0) {
                res += to_string(*i);
                res += ", ";
            } else {
                tmp.push_back(*i);
                res += to_string(tmp[0]);
                res += "..";
                res += to_string(tmp[tmp.size() - 1]);
                res += ", ";
                tmp.clear();
            }
        }
    }
    res.erase(res.size() - 2, 2);
    res += "]";
    out << res;
    return 0;
}
