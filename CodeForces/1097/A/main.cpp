#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s;
    bool res = false;
    for (int i = 0; i < 5; i++) {
        cin >> t;
        if (t[0] == s[0] || t[1] == s[1]) {
            res = true;
            break;
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}