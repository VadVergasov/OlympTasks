// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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
#include <iostream>
#include <vector>

using namespace std;

void Sort(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        for (int k = i + 1; k < a.size(); k++) {
            if (a[k] < a[i]) {
                swap(a[k], a[i]);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : b) {
        cin >> i;
    }
    for (const auto &i : b) {
        a.push_back(i);
    }
    Sort(a);
    for (const auto &i : a) {
        cout << i << " ";
    }
    return 0;
}