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
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n, q;
    long long H;
    vector<long long> h;
    vector<pair<int, pair<int, int> > > qu;

    n = inf.readInt(1, 1000000, "n");
    inf.readSpace();
    H = inf.readLong(1LL, (long long)(1LL << 32LL) - 1, "H");
    inf.readSpace();
    q = inf.readInt(1, 100000, "q");
    inf.readEoln();
    h.resize(n);
    qu.resize(q);

    for (int i = 0; i < n - 1; i++) {
        h[i] = inf.readLong(1LL, H, "h_i");
        inf.readSpace();
    }
    h.back() = inf.readLong(1LL, H, "h_i");
    inf.readEoln();

    for (int i = 0; i < q; i++) {
        qu[i].first = inf.readInt(1, n, "pos_i");
        inf.readSpace();
        qu[i].second.first = inf.readInt(0, n / 2, "s_i");
        inf.readSpace();
        qu[i].second.second = inf.readLong(1LL, H, "v_i");
        inf.readEoln();
    }
    inf.readEof();
}
