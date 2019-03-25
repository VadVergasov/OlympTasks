#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n, q;
    long long H;
    vector<long long> h;
    vector<pair<int, pair<int, int> > > qu;

    n = inf.readInt(1, 1000000);
    inf.readSpace();
    H = inf.readLong(1LL, (long long)(1LL << 32LL) - 1);
    inf.readSpace();
    q = inf.readInt(1, 100000);
    inf.readEoln();
    h.resize(n);
    qu.resize(q);

    for (int i = 0; i < n - 1; i++) {
        h[i] = inf.readLong(1LL, H);
        inf.readSpace();
    }
    h.back() = inf.readLong(1LL, H);
    inf.readEoln();

    for (int i = 0; i < q; i++) {
        qu[i].first = inf.readInt(1, n);
        inf.readSpace();
        qu[i].second.first = inf.readInt(0, n / 2);
        inf.readSpace();
        qu[i].second.second = inf.readLong(1LL, H);
        inf.readEoln();
    }
    inf.readEof();
}
