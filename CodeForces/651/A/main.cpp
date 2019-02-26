#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1, a2;
    cin >> a1 >> a2;
    int res = 0;
    while ((a1 > 0 && a2 > 2) || (a2 > 0 && a1 > 2)) {
        if (a1 > a2) {
            a2++;
            a1 -= 2;
        } else {
            a1++;
            a2 -= 2;
        }
        res++;
    }
    if (a2 > 1 || a1 > 1) {
        res++;
    }
    cout << res;
    return 0;
}