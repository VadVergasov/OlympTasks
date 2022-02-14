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
    long long k, tmp;
    in >> k;
    vector<long long> o;
    for (int i = 0; i < k; i++) {
        in >> tmp;
        vector<long long> r;
        bool f = false;
        while (tmp) {
            r.push_back(tmp % 2);
            tmp /= 2;
        }
        reverse(r.begin(), r.end());
        for (int j = 0; j < r.size(); j++) {
            if (r[j] == 0) {
                r[j] = 1;
                f = true;
                break;
            }
        }
        if (!f) {
            r.back() = 0;
        }
        long long res = 0;
        for (int j = 0; j < r.size(); j++) {
            res += r[j] * pow(2, r.size() - j - 1);
        }
        o.push_back(res);
    }
    for (int i = 0; i < k - 1; i++) {
        out << o[i] << " ";
    }
    out << o.back();
    return 0;
}