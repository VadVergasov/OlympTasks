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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b = {0, 0, 0};
        for (auto &i : a) {
            cin >> i;
            b[i % 3]++;
        }
        int sum = 0;
        for (auto i : b) {
            sum += i;
        }
        sum /= 3;
        int res = 0;
        while (b[2] < sum) {
            b[2]++;
            res++;
            b[1]--;
        }
        while (b[1] < sum) {
            b[1]++;
            res++;
            b[0]--;
        }
        while (b[0] < sum) {
            b[0]++;
            res++;
            b[2]--;
        }
        while (b[2] < sum) {
            b[2]++;
            res++;
            b[1]--;
        }
        while (b[1] < sum) {
            b[1]++;
            res++;
            b[0]--;
        }
        while (b[0] < sum) {
            b[0]++;
            res++;
            b[2]--;
        }
        cout << res << "\n";
    }
    return 0;
}
