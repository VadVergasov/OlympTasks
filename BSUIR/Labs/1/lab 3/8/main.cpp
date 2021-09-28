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
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 1000000; i++) {
        int sum = 0, cur = i, num = 0;
        while (cur) {
            cur /= 10;
            num++;
        }
        cur = i;
        while (cur) {
            sum += pow(cur % 10, num);
            cur /= 10;
        }
        if (i == sum) {
            cout << i << endl;
        }
    }
    return 0;
}
