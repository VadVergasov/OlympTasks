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

ints r, c;
int h, w;

void give_initial_chart(int H, int W, ints R, ints C) {
    r = R;
    c = C;
    h = H;
    w = W;
}

int swap_seats(int a, int b) {
    swap(r[a], r[b]);
    swap(c[a], c[b]);
    vector<vector<int> > table(r.size(), vector<int>(c.size()));
    for (int i = 0; i < r.size(); i++) {
        table[r[i]][c[i]] = i;
    }
    int res = -2;
    set<int> nums;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            nums.insert(table[i][j]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    nums.clear();
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            nums.insert(table[j][i]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    nums.clear();
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            nums.insert(table[i][j]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    nums.clear();
    for (int i = w - 1; i >= 0; i--) {
        for (int j = h - 1; j >= 0; j--) {
            nums.insert(table[j][i]);
            if (*nums.rbegin() + 1 == (i + 1) * (j + 1) &&
                *nums.rbegin() != 0) {
                res++;
            }
        }
    }
    return res;
}
