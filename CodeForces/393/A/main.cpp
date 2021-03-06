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
    cin >> s;
    vector<int> let(4);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'n') {
            let[0]++;
        } else if (s[i] == 'i') {
            let[1]++;
        } else if (s[i] == 'e') {
            let[2]++;
        } else if (s[i] == 't') {
            let[3]++;
        }
    }
    int res = 0;
    while (let[0] > 2 && let[1] > 0 && let[2] > 2 && let[3] > 0) {
        let[0] -= 2;
        let[1]--;
        let[2] -= 3;
        let[3]--;
        res++;
    }
    cout << res;
    return 0;
}