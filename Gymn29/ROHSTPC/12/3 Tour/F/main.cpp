#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 3 == 0) {
        cout << (n * ((n - 1) >> 1)) - 2 * n / 3;
    } else {
        cout << (n * ((n - 1) >> 1));
    }
    return 0;
}