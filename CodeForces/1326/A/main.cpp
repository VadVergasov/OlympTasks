// https://codeforces.com/contest/1326/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n - 2; i++) {
            cout << 5;
        }
        if (((n - 1) * 5 + 3) % 3 == 0) {
            cout << 43;
        } else {
            cout << 23;
        }
        cout << "\n";
    }
    return 0;
}