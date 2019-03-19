#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << 1 << " " << -1;
        return 0;
    } else if (n > 0) {
        if (n >= 1e18) {
            cout << (long long)1e18 << " " << n - (long long)(1e18);
        } else {
            cout << n - 1 << " 1";
        }
    } else {
        if (n <= -1e18) {
            cout << (long long)-1e18 << " " << n - (long long)(-1e18);
        } else {
            cout << n - 1 << " 1";
        }
    }
    return 0;
}