// Main code for this task.
// Copyright (C) 2023  Vadzim Verhasau aka VadVergasov
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> result;
    string current;
    current.reserve(n << 1);
    for (int cur = 0; cur < (1 << (n << 1)); cur++) {
        current.clear();
        int bit = 0;
        while (bit < (n << 1)) {
            if (cur & (1 << bit)) {
                current += '(';
            } else {
                current += ')';
            }
            bit++;
        }
        int balance = 0;
        bool ok = true;
        for (const auto& c : current) {
            if (c == '(') {
                balance++;
            } else {
                balance--;
            }
            if (balance < 0) {
                ok = false;
                break;
            }
        }
        if (balance != 0) {
            ok = false;
        }
        if (ok) {
            result.push_back(current);
        }
    }
    sort(result.begin(), result.end());
    for (const auto& i : result) {
        cout << i << endl;
    }
    return 0;
}
