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
    string s;
    vector<string> all;
    getline(cin, s);
    istringstream iss(s);
    do {
        string t;
        iss >> t;
        all.push_back(t);
    } while (iss);
    for (int i = 0; i < all.size() - 1; i++) {
        string tmp = "";
        if (all[i].size() == 1) {
            continue;
        }
        for (int j = 1; j < all[i].size() - 1; j++) {
            tmp += all[i][j];
        }
        sort(tmp.begin(), tmp.end());
        all[i].erase(all[i].begin() + 1, all[i].end() - 1);
        all[i].insert(1, tmp);
    }
    for (int i = 0; i < all.size(); i++) {
        cout << all[i] << " ";
    }
    return 0;
}
