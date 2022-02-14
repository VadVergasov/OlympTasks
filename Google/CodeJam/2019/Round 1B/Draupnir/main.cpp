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
    long long t, w;
    cin >> t >> w;
    for (long long i = 0; i < t; i++) {
        vector<long long> days(7, 0), r(7, 0);
        cout << 1 << endl;
        cin >> days[1];
        cout << 2 << endl;
        cin >> days[2];
        cout << 3 << endl;
        cin >> days[3];
        cout << 4 << endl;
        cin >> days[4];
        cout << 5 << endl;
        cin >> days[5];
        cout << 6 << endl;
        cin >> days[6];
        bool f = true;
        for (r[1] = 0; r[1] <= 100 && f; r[1]++) {
            for (r[2] = 0; r[2] <= 100 && f; r[2]++) {
                if (2 * r[1] + r[2] == days[2] - days[1]) {
                    for (r[3] = 0; r[3] <= 100 && f; r[3]++) {
                        if (4 * r[1] + r[3] == days[3] - days[2]) {
                            for (r[4] = 0; r[4] <= 100 && f; r[4]++) {
                                if (8 * r[1] + 2 * r[2] + r[4] ==
                                    days[4] - days[3]) {
                                    for (r[5] = 0; r[5] <= 100 && f; r[5]++) {
                                        if (16 * r[1] + r[5] ==
                                            days[5] - days[4]) {
                                            for (r[6] = 0; r[6] <= 100 && f;
                                                 r[6]++) {
                                                if (2 * r[1] + r[2] + r[3] +
                                                        r[4] + r[5] + r[6] ==
                                                    days[1]) {
                                                    f = false;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << r[1] - 1 << " " << r[2] - 1 << " " << r[3] - 1 << " "
             << r[4] - 1 << " " << r[5] - 1 << " " << r[6] - 1 << endl;
        int res;
        cin >> res;
        if (res == -1) {
            return 0;
        }
    }
    return 0;
}