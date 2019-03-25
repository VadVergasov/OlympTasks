#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);

    int n = atoi(argv[1]);
    int k = rnd.next(1, 1000);

    cout << n << " " << k << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << rnd.next(1, 100000) << ' ';
    }
    cout << rnd.next(1, 100000) << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << rnd.next(1, k) << ' ';
    }
    cout << rnd.next(1, k) << endl;
    return 0;
}