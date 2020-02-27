#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, res = 0;
    cin >> n >> k;
    while (n) {
        n /= k;
        res++;
    }
    cout << res;
    return 0;
}