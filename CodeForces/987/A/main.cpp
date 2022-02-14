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
    string b[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    string c[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    int n;
    cin >> n;
    vector<string> a;
    string tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    cout << 6 - n << "\n";
    vector<int> no;
    for (int i = 0; i < 6; i++) {
        bool o = true;
        for (int j = 0; j < n; j++) {
            if (a[j] == b[i]) {
                o = false;
                break;
            }
        }
        if (o) {
            no.push_back(i);
        }
    }
    for (int i = 0; i < no.size(); i++) {
        cout << c[no[i]] << "\n";
    }
    return 0;
}
