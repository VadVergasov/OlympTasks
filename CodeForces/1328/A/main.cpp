// https://codeforces.com/contest/1328/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double a, b;
        cin >> a >> b;
        cout << fixed << setprecision(0) << b * ceil(a / b) - a << "\n";
    }
    return 0;
}