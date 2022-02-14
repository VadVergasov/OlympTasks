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
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, r, R;
    cin >> x1 >> y1 >> r >> x2 >> y2 >> R;
    if (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) <= abs(R - r)) {
        if (R - r < 0) {
            cout << "Yes, but the opposite is true for two figures" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } else {
        if (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) <= R + r) {
            cout << "Shapes intersect" << endl;
        } else {
            cout << "None of the conditions are met" << endl;
        }
    }
    return 0;
}
