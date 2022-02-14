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

using namespace std;

int main() {
    int **p1, **p2;
    p1 = static_cast<int **>(static_cast<void *>(&p2));
    p2 = static_cast<int **>(static_cast<void *>(&p1));
    cout << p1 << " " << *p1 << endl << p2 << " " << *p2;
    int **cur = p1;
    for (int i = 0; i < 10; i++) {
        cur = static_cast<int **>(static_cast<void *>(*cur));
        cout << cur << endl;
    }
    return 0;
}
