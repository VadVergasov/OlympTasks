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
