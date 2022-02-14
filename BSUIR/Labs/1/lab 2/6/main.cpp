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
    double a, b, c;
    int N;
    cin >> a >> b >> c >> N;
    double y = pow((a + b), 3);
    switch (N) {
        case 2:
            y = b * c - pow(a, 2);
            break;
        case 56:
            y = b * c;
            break;
        case 7:
            y = pow(a, 2) + c;
            break;
        case 3:
            y = a - b * c;
            break;
    }
    cout << y << endl;
    return 0;
}
