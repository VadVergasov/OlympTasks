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

#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n, k;
    vector<int> r, a;

    if (validator.testset() == "first") {
        n = inf.readInt(1, 28, "n");
        inf.readSpace();
        k = inf.readInt(1, 1000, "k");
    } else {
        n = inf.readInt(1, 100000, "n");
        inf.readSpace();
        k = inf.readInt(1, 1000, "k");
    }
    inf.readEoln();
    r.resize(n);
    a.resize(n);
    for (int i = 0; i < n - 1; i++) {
        r[i] = inf.readInt(1, 100000, "ri");
        inf.readSpace();
    }
    r.back() = inf.readInt(1, 100000, "ri");
    inf.readEoln();
    for (int i = 0; i < n - 1; i++) {
        a[i] = inf.readInt(1, 1000, "ai");
        inf.readSpace();
    }
    a.back() = inf.readInt(1, 1000, "ai");

    if (validator.group() == "second") {
        ensure(n <= 30000);
        ensure(k <= 1000);
    }

    if (validator.group() == "third") {
        ensure(n * k <= 1e8);
    }

    inf.readEoln();
    inf.readEof();
}
