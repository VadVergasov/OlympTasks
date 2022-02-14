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
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long a, b, res = 0;
    in >> a >> b;
    for (int i = 1; i < 60; i++) {
        for (int j = 1; j < 60; j++) {
            for (int k = 1; k < 60; k++) {
                if (i + j + k > 61) {
                    continue;
                }
                vector<short> num(i + j + k);
                for (int z = 0; z < i; z++) {
                    num[z] = 1;
                }
                for (int z = 0; z < j; z++) {
                    num[i + z] = 0;
                }
                for (int z = 0; z < k; z++) {
                    num[i + j + z] = 1;
                }
                long long r = 0;
                for (int z = 0; z < num.size(); z++) {
                    if (num[z] == 1) {
                        r <<= 1;
                        r++;
                    } else {
                        r <<= 1;
                    }
                }
                if (r >= a && r <= b) {
                    res++;
                }
            }
        }
    }
    out << res;
    return 0;
}