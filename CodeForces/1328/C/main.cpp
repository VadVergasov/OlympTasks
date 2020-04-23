// https://codeforces.com/contest/1328/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string c;
        cin >> c;
        bool f = false;
        string a = "1", b = "1";
        for (int i = 1; i < n; i++) {
            if (c[i] == '0') {
                a += "0";
                b += "0";
            } else if (c[i] == '1') {
                if (!f) {
                    a += "1";
                    b += "0";
                    f = true;
                } else {
                    a += "0";
                    b += "1";
                }
            } else if (c[i] == '2') {
                if (!f) {
                    a += "1";
                    b += "1";
                } else {
                    a += "0";
                    b += "2";
                }
            }
        }
        cout << a << "\n" << b << "\n";
    }
    return 0;
}