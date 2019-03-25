#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(1, 1000000);
    long long st = atoi(argv[1]);
    int q = atoi(argv[2]);
    long long H = rnd.next(1LL, (long long)(1LL << st) - 1);

    cout << n << " " << H << " " << q << endl;

    for (int i = 0; i < n - 1; i++) {
        cout << rnd.next(1LL, H) << " ";
    }
    cout << rnd.next(1LL, H) << endl;

    for (int i = 0; i < q; i++) {
        cout << rnd.next(1, n) << " " << rnd.next(0, n / 2) << " "
             << rnd.next(1LL, H) << endl;
    }

    return 0;
}