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
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n;
    in >> n;
    vector<int> b;
    while (n) {
        b.push_back(n % 2);
        n /= 2;
    }
    bool c = false;
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.size() - 1; i++) {
        if (b[i] == 1 && b[i + 1] == 0) {
            c = true;
            swap(b[i], b[i + 1]);
            break;
        }
    }
    reverse(b.begin(), b.end());
    if (!c) {
        for (int i = b.size() - 1; i >= 0; i++) {
            if (b[i] == 1) {
                b[i] = 0;
                break;
            }
        }
        b.push_back(1);
    }
    int res = 0;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 0 && i == b.size() - 1) {
            break;
        }
        res *= 2;
        res += b[i];
    }
    out << res;
    return 0;
}
