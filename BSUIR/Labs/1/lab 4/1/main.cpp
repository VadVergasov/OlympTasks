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
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Variant 6
int main() {
    srand(time(NULL));
    int k;
    cout << "Enter the size of array: ";
    while (!(cin >> k) || k <= 0 || k > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of array: ";
    }
    int a[k];
    for (int i = 0; i < k; i++) {
        a[i] = rand() % 100;
    }
    cout << "Original:\n";
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int n;
    cout << "Enter the n to rotate: ";
    while (!(cin >> n) || n <= 0 || n > k) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the n to rotate: ";
    }
    cout << "Rotated:\n";
    for (int j = 0; j < n; j++) {
        int start = a[0];
        for (int i = 0; i < k - 1; i++) {
            a[i] = a[i + 1];
        }
        a[k - 1] = start;
    }
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
