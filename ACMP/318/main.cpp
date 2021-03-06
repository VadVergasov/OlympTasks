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

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    deque<int> bin;
    while (n) {
        bin.push_front(n % 2);
        n /= 2;
    }
    bin.push_front(0);
    next_permutation(bin.begin(), bin.end());
    long long res = 0;
    for (int i = 0; i < bin.size(); i++) {
        res += bin[i] * ((long long)1 << (bin.size() - i - 1));
    }
    out << res;
    return 0;
}