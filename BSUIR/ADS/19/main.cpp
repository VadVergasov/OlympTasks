#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t;
    cin >> n;
    bool t1 = false, t2 = false, t3 = false;
    for (long long i = 0; i < n; i++) {
        cin >> t;
        if (t == 1021) {
            t1 = true;
        } else if (t == 1031) {
            t2 = true;
        } else if (t == 1033) {
            t3 = true;
        } else if (t == 1052651) {
            t1 = true;
            t2 = true;
        } else if (t == 1054693) {
            t1 = true;
            t3 = true;
        } else if (t == 1065023) {
            t2 = true;
            t3 = true;
        } else if (t == 1087388483) {
            cout << "YES";
            return 0;
        }
    }
    if (t1 && t2 && t3) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}