#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    string s, r;
    cin >> s;
    r = s;
    for (auto &i : r) {
        if (i == '.') {
            i = '0';
        }
    }
    bool res = true;
    for (int i = p; i < n; i++) {
        if (r[i] != r[i - p]) {
            res = false;
        }
    }
    if (!res) {
        cout << r;
        return 0;
    }
    int i = 0;
    while (i < n && s[i] != '.') {
        i++;
    }
    if (i + p < n) {
        r[i] = '1';
        cout << r;
        return 0;
    }
    i = n - 1;
    while (i >= 0 && s[i] != '.') {
        i--;
    }
    if (i - p >= 0) {
        r[i] = '1';
        cout << r;
        return 0;
    }
    cout << r;
    return 0;
}