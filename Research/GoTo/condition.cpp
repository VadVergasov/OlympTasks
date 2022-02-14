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
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

const int N = 1e2;

void get_condition(vector<vector<vector<int> > > &arr, int to_search,
                   tuple<int, int, int> &res) {
    int x, y, z;
    bool f = true;
    for (int i = 0; i < N && f; i++) {
        for (int j = 0; j < N && f; j++) {
            for (int k = 0; k < N && f; k++) {
                if (arr[i][j][k] == to_search) {
                    x = i;
                    y = j;
                    z = k;
                    f = false;
                }
            }
        }
    }

    res = {x, y, z};
}

int main() {
    srand(time(NULL));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<vector<int> > > arr(N,
                                      vector<vector<int> >(N, vector<int>(N)));
    vector<int> to_search;
    for (auto &i : arr) {
        for (auto &j : i) {
            for (auto &k : j) {
                k = rand() % 1000000;
                if (rand() % 2) {
                    to_search.push_back(
                        k);  // randomizing queue of elements to search;
                }
            }
        }
    }
    tuple<int, int, int> res;
    for (auto i : to_search) {
        get_condition(arr, i, res);
    }
    return 0;
}
