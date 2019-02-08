#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = 0, cur = 0;
    cin >> n;
    while (cur + (res + 1) * (res + 2) / 2 <= n) {
        res++;
        cur += res * (res + 1) / 2;
    }
    cout << res;
    return 0;
}
