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

int fast_atoi(const char *str) {
    int val = 0;
    while (*str) {
        val = val * 10 + (*str++ - '0');
    }
    return val;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    map<string, stack<int>> vars;
    while (cin >> s) {
        if (s == "{") {
            for (auto &i : vars) {
                i.second.push(i.second.top());
            }
        } else if (s == "}") {
            for (auto &i : vars) {
                i.second.pop();
                if (i.second.size() == 0) {
                    i.second.push(0);
                }
            }
        } else {
            int pos = s.find("=");
            if (isdigit(s[pos + 1]) || s[pos + 1] == '-') {
                string s1 = s.substr(0, pos);
                if (vars[s1].size() == 0) {
                    vars[s1].push(0);
                }
                vars[s1].pop();
                if (s[pos + 1] == '-') {
                    vars[s1].push(
                        -fast_atoi(s.substr(pos + 2, s.size()).c_str()));
                } else {
                    vars[s1].push(
                        fast_atoi(s.substr(pos + 1, s.size()).c_str()));
                }
            } else {
                string s1 = s.substr(0, pos), s2 = s.substr(pos + 1, s.size());
                if (s1 == s2) {
                    if (vars[s1].size() == 0) {
                        vars[s1].push(0);
                    }
                    cout << vars[s1].top() << "\n";
                    continue;
                }
                if (vars[s1].size() == 0) {
                    vars[s1].push(0);
                }
                if (vars[s2].size() == 0) {
                    vars[s2].push(0);
                }
                vars[s1].pop();
                vars[s1].push(vars[s2].top());
                cout << vars[s1].top() << "\n";
            }
        }
    }
    return 0;
}
