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
    string n;
    cin >> n;
    if (atoi(n.c_str()) >= 0) {
        cout << n;
        return 0;
    }
    if (n.back() > n[n.size() - 2]) {
        string res = "";
        for (int i = 0; i < n.size() - 1; i++) {
            res += n[i];
        }
        cout << atoi(res.c_str());
        return 0;
    }
    string res = "";
    for (int i = 0; i < n.size() - 2; i++) {
        res += n[i];
    }
    res += n.back();
    cout << atoi(res.c_str());
    return 0;
}
