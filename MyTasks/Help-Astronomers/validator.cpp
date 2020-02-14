#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    long long n, M;
    vector<long long> a, p;

    if (validator.testset() == "first") {
        n = inf.readLong(1LL, 100LL, "n");
        inf.readSpace();
        M = inf.readLong(1000000007LL, 1000000007LL, "M");
    } else if (validator.testset() == "second") {
        n = inf.readLong(1LL, 100LL, "n");
        inf.readSpace();
        M = inf.readLong(1000000007LL, 1000000007, "M");
    } else if (validator.testset() == "third") {
        n = inf.readLong(1LL, 1000LL, "n");
        inf.readSpace();
        M = inf.readLong(2LL, 1824261409, "M");
    } else {
        n = inf.readLong(1LL, 1000000LL, "n");
        inf.readSpace();
        M = inf.readLong(2LL, 1824261409, "M");
    }
    inf.readEoln();
    a.resize(n);
    p.resize(n);
    for (int i = 0; i < n; i++) {
        if (validator.testset() == "first") {
            a[i] = inf.readLong(1LL, 10000LL, "ai");
            inf.readSpace();
            p[i] = inf.readLong(2LL, 2LL, "pi");
        } else if (validator.testset() == "second") {
            a[i] = inf.readLong(1LL, 1000000000LL, "ai");
            inf.readSpace();
            p[i] = inf.readLong(2LL, 2LL, "pi");
        } else if (validator.testset() == "third") {
            a[i] = inf.readLong(1LL, 1000000000000000000LL, "ai");
            inf.readSpace();
            p[i] = inf.readLong(2LL, 1000LL, "pi");
        } else {
            a[i] = inf.readLong(1LL, 1000000000000000000LL, "ai");
            inf.readSpace();
            p[i] = inf.readLong(2LL, 100000LL, "pi");
        }
        inf.readEoln();
    }

    if (validator.testset() == "first") {
        ensure(n <= 10);
        ensure(M = 1000000007);
    } else if (validator.testset() == "second") {
        ensure(n <= 10);
        ensure(M = 1824261409);
    } else if (validator.testset() == "third") {
        ensure(n <= 1000);
    }

    inf.readEof();
}
