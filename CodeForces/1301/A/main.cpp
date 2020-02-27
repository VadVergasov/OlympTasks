// https://codeforces.com/contest/1301/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    for (int q = 0; q < n; q++) {
        string a, b, c;
        cin >> a >> b >> c;
        bool res = true;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i] && a[i] != c[i] ||
                a[i] != b[i] && (a[i] != c[i] && b[i] != c[i])) {
                res = false;
                cout << "NO\n";
                break;
            }
        }
        if (!res) {
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}