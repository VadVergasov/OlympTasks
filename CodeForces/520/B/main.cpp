#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int res = 0;
    while (m != n) {
        if (m % 2 == 0 && m > n) {
            m /= 2;
        } else {
            m++;
        }
        res++;
    }
    cout << res;
    return 0;
}
