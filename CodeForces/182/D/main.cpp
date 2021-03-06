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
#include <bits/stdc++.h>

using namespace std;

const int p = 31;
vector<unsigned long long> pows(100000);

int main() {
    pows[0] = 1;
    string s1, s2;
    cin >> s1 >> s2;
    vector<unsigned long long> hash1, hash2;
    for (int i = 1; i < max(s1.size(), s2.size()); i++) {
        pows[i] *= pows[i - 1] * p;
    }

    for (int i = 0; i < s1.size(); i++) {
        hash1[i] = (s1[i] - 'a' + 1) * pows[i];
        if (i) {
            hash1[i] += hash1[i - 1];
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        hash2[i] = (s2[i] - 'a' + 1) * pows[i];
        if (i) {
            hash2[i] += hash2[i - 1];
        }
    }
    return 0;
}