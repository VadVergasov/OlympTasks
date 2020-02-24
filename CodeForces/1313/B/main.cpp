// https://codeforces.com/contest/1313/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, x, y;
        cin >> n >> x >> y;
        cout << max(1, min(n, x + y - n + 1)) << " " << min(n, x + y - 1)
             << "\n";
    }
    return 0;
}