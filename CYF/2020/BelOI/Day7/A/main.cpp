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

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

vector<long long> facts;

long long fact(int n) {
    if (n == 1) {
        return 1;
    }
    if (facts[n] != 1) {
        return facts[n];
    }
    facts[n] = fact(n - 1) * n;
    return facts[n];
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    facts.resize(n + 1, 1);
    vector<int> a, b(n);
    iota(b.begin(), b.end(), 1);
    long long mid = fact(n) / 2 - 1;
    int l = n - 1;
    while (mid != 0) {
        long long f = fact(l), i = 1;
        while (f <= mid) {
            f += fact(l);
            i++;
        }
        i--;
        f -= fact(l);
        a.push_back(b[i]);
        b.erase(b.begin() + i);
        l--;
        mid -= f;
    }
    for (int i = 0; i < b.size(); i++) {
        a.push_back(b[i]);
    }
    for (auto i : a) {
        out << i << " ";
    }
    out << "\n";
    next_permutation(a.begin(), a.end());
    for (auto i : a) {
        out << i << " ";
    }
    return 0;
}