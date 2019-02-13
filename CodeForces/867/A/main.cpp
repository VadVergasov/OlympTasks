#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res1 = 0, res2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            if (s[i] == 'F') {
                res1++;
            } else {
                res2++;
            }
        }
    }
    if (res1 > res2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}