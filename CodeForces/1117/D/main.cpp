#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, res = 1, mod = 10e8 + 7;
    cin >> n >> m;
    int i = 1;
    while (n - m * i > 0) {
        res += (n - m * i + 1);
        i++;
    }
    cout << res;
    return 0;
}