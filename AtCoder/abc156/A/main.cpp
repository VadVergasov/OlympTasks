#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, r;
    cin >> n >> r;
    if (n < 10) {
        cout << r + 100 * (10 - n);
    } else {
        cout << r;
    }
    return 0;
}