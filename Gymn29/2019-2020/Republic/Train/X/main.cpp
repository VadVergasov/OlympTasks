// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
    deque<char> s(1);
    in >> s[0];
    string s1;
    in >> s1;
    for (int i = 0; i < s1.size(); i++) {
        if (s.front() >= s1[i]) {
            s.push_front(s1[i]);
        } else {
            s.push_back(s1[i]);
        }
    }
    for (auto i : s) {
        out << i;
    }
    return 0;
}