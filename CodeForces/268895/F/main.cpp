// https://codeforces.com/group/kubgwEbWlB/contest/268895/problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long double a, b, c;
        cin >> a >> b >> c;
        if (c == 0) {
            cout << "0\n";
            continue;
        }
        if (b < c) {
            cout << fixed << setprecision(0) << ceil(c / b) << "\n";
        } else {
            if (a == c || b == c) {
                cout << "1\n";
            } else {
                cout << "2\n";
            }
        }
    }
    return 0;
}