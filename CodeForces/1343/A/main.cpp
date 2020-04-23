// https://codeforces.com/contest/1343/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (n % ((2 << i) - 1) == 0) {
                cout << n / ((2 << i) - 1) << "\n";
                break;
            }
        }
    }
    return 0;
}