#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, del, res = 0;
    cin >> n >> m;
    if (m % n != 0) {
        cout << -1;
        return 0;
    }
    del = m / n;
    while (del > 1) {
        if (del % 3 == 0) {
            del /= 3;
        } else if (del % 2 == 0) {
            del /= 2;
        } else {
            cout << -1;
            return 0;
        }
        res++;
    }
    cout << res;
    return 0;
}