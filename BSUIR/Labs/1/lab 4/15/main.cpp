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
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number to find: ";
    while (!(cin >> n) || n > 1e7) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number to find: ";
    }
    vector<vector<int> > a = {{1}};
    int cur = 2, dir_y = 1, dir_x = 0;
    pair<int, int> latest = {0, 1};
    while (cur < n) {
        if ((int)a.size() <= latest.second) {
            a.push_back(vector<int>(latest.second + 1));
            for (int i = 0; i < latest.second; i++) {
                a[i].push_back(0);
            }
        }
        a[latest.first][latest.second] = cur;
        if (latest.second == 0) {
            latest.second = latest.first + 1;
            latest.first = 0;
            dir_y = 1;
            dir_x = 0;
            cur++;
            continue;
        }
        if (latest.first == latest.second) {
            dir_y = 0;
            dir_x = -1;
        }
        latest.first += dir_y;
        latest.second += dir_x;
        cur++;
    }
    cout << latest.first + 1 << " " << latest.second + 1 << endl;
    return 0;
}
