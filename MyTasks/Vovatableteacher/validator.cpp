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
