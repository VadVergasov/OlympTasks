// https://codeforces.com/contest/1335/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (int)floor((n - 1) / 2.0) << "\n";
    }
    return 0;
}