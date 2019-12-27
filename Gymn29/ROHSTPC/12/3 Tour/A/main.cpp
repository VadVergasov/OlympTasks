#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mn = 1000, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        mn = min(mn, t);
        sum += t + (t % 2 - 1);
    }
    if (n % 2 == 0) {
        sum -= mn + (mn % 2 - 1);
    }
    cout << sum;
    return 0;
}