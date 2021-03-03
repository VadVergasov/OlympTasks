"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>
#include "grader.h"

using namespace std;

string guess_sequence(int N) {
    string p = "";
    vector<char> sym;
    if (press("XY") >= 1) {
        if (press("X") == 1) {
            p = "X";
            sym = {'A', 'B', 'Y'};
        } else {
            p = "Y";
            sym = {'A', 'B', 'X'};
        }
    } else {
        if (press("A") == 1) {
            p = "A";
            sym = {'B', 'X', 'Y'};
        } else {
            p = "B";
            sym = {'A', 'X', 'Y'};
        }
    }
    for (int i = 0; i < N - 2; i++) {
        string req = p + sym[0] + sym[0] + p + sym[0] + sym[1] + p + sym[0] +
                     sym[2] + p + sym[2];
        int ret = press(req);
        if (ret == p.size() + 1) {
            p += sym[2];
        } else if (ret == p.size() + 2) {
            p += sym[0];
        } else {
            p += sym[1];
        }
    }
    if (N == 1) {
        return p;
    }
    if (press(p + sym[0]) == N) {
        p += sym[0];
    } else {
        if (press(p + sym[1]) == N) {
            p += sym[1];
        } else {
            p += sym[2];
        }
    }
    return p;
}
