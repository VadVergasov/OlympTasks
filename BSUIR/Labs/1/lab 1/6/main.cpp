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
    int h1, min1, h2, min2;
    cin >> h1 >> min1 >> h2 >> min2;
    int res = h2 * 60 + min2 - h1 * 60 - min1 + 24 * 60;
    res %= 24 * 60;
    cout << res;
    return 0;
}
