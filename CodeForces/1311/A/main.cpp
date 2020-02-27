// https://codeforces.com/problemset/problem/1311/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "0\n";
            continue;
        }
        if (a % 2 != b % 2 && a < b) {
            cout << "1\n";
            continue;
        }
        if (a % 2 == b % 2 && a > b) {
            cout << "1\n";
            continue;
        }
        cout << "2\n";
    }
    return 0;
}