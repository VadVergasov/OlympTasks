#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    long long n = atoll(argv[1]);
    long long M = atoll(argv[2]);
    long long a = atoll(argv[3]);
    long long p = atoll(argv[4]);

    cout << n << " " << M << endl;
    for (int i = 0; i < n; i++) {
        cout << rnd.next(1LL, a) << ' ';
        cout << rnd.next(2LL, p) << endl;
    }
    return 0;
}