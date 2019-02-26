#include <bits/stdc++.h>

using namespace std;

int main() {
    long long b;
    cin >> b;
    int res = 0;
    for (long long i = 1; i <= sqrt(b); i++) {
        if (b % i == 0) {
            res += 2;
        }
        if (i * i == b) {
            res--;
        }
    }
    cout << res;
    return 0;
}
