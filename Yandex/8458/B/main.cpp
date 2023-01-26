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
    vector<bool> a(n);
    for (const auto& current : ranges::iota_view(0, n)) {
        bool c;
        cin >> c;
        a[current] = c;
    }
    int result = 0;
    for (size_t current = 0; current < n; current++) {
        int length = 0;
        while (a[current]) {
            current++;
            length++;
        }
        result = max(result, length);
    }
    cout << result << endl;
    return 0;
}
