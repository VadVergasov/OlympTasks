#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    int i = 0;
    if (p == 0) {
        cout << __builtin_popcount(n);
        return 0;
    }
    while (__builtin_popcount(n) > i) {
        n -= p;
        i++;
    }
    if (n < 1 || n < i) {
        cout << -1;
        return 0;
    }
    cout << i;
    return 0;
}