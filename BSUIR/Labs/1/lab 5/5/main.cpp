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
#include <iostream>
#include <vector>

using namespace std;

void get_odd_in_even(vector<vector<int> > &a, vector<int> &res) {
    for (auto i : a) {
        for (int j = 0; j < (int)i.size(); j++) {
            if ((j + 1) % 2 == 0) {
                res.push_back(i[j]);
            }
        }
    }
}

double get_average(vector<int> &res) {
    int sum = 0;
    for (auto i : res) {
        sum += i;
    }
    return (double)sum / (double)res.size();
}

int main() {
    int n, m;
    cout << "Enter the size of 2d array: ";
    while (!(cin >> n >> m) || n <= 0 || n > 1e6 || m <= 0 || m > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of 2d array: ";
    }
    vector<vector<int> > a(n, vector<int>(m));
    for (auto &i : a) {
        for (auto &j : i) {
            cout << "Enter the next element of the array: ";
            while (!(cin >> j)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter the next element of the array: ";
            }
        }
    }
    vector<int> res;
    get_odd_in_even(a, res);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl << "Average: " << get_average(res) << endl;
    return 0;
}
