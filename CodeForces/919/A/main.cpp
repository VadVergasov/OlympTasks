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
    unsigned short int n, m;
    double a, b;
    cin >> n >> m;
    vector<double> d;
    for (unsigned short int i = 0; i < n; i++) {
        cin >> a >> b;
        d.push_back(a / b);
    }
    sort(d.begin(), d.end());
    cout << fixed << setprecision(8) << (double)(d[0] * m);
    return 0;
}
