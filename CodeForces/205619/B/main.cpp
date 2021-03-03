"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    vector<int> a;
    int t;
    in >> t;
    while (t != 0) {
        a.push_back(t);
        in >> t;
    }
    sort(a.begin(), a.end());
    int pos1 = a[0], pos2 = a[1], i = 2;
    vector<int>::iterator cur = lower_bound(a.begin() + 2, a.end(), pos2);
    while (cur != a.end() && i < a.size() + 2) {
        int pos3 = *cur;
        if (pos1 + pos2 > pos3 && pos1 + pos3 > pos2 && pos2 + pos3 > pos1) {
            out << "YES\n" << pos1 << " " << pos2 << " " << pos3;
            return 0;
        }
        pos1 = pos2;
        pos2 = a[i];
        i++;
        cur = lower_bound(a.begin() + i, a.end(), pos2);
    }
    out << "NO";
    return 0;
}