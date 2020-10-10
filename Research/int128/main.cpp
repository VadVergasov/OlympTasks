#include <cassert>
#include <ctime>
#include <iostream>
#include <vector>

#include "testlib.h"

using namespace std;

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;

ll summod(ll a, ll b, ll m) {
    a += b;
    if (a >= m) {
        a -= m;
    }
    return a;
}

ll mulmod(ll a, ll b, ll m) {
    if (b == 0) {
        return 0;
    }
    ll r = mulmod(a, b >> 1, m);
    r = summod(r, r, m);
    return b & 1 ? summod(r, a, m) : r;
}

ll mult(ll a, ll b, ll m) {
    ll q = (ld)a * (ld)b / (ld)m;
    ll r = a * b - q * m;
    if (r < 0) r += m;
    if (m <= r) r -= m;
    return r;
}

ll mulmod_i128(ll a, ll b, ll m) { return (__int128)a * (__int128)b % m; }

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    vector<tuple<ll, ll, ll>> tests;
    for (int iter = 0; iter < 1e+7; ++iter) {
        ll m = rnd.next((ll)1e+17, (ll)1e+18);
        ll a = rnd.next(m);
        ll b = rnd.next(m);
        tests.emplace_back(a, b, m);
    }

    ull answer;
    for (int t = 0; t < 3; ++t) {
        ull result = 0;
        auto start = clock();
        for (auto& [a, b, m] : tests) {
            ll r;
            if (t == 0) {
                r = mult(a, b, m);
            } else if (t == 1) {
                r = mulmod_i128(a, b, m);
            } else {
                r = mulmod(a, b, m);
            }
            result += r;
        }
        if (t) {
            assert(answer == result);
        } else {
            answer = result;
        }
        cerr << "Time execute: " << (clock() - start) / (double)CLOCKS_PER_SEC
             << " sec" << endl;
    }

    return 0;
}
